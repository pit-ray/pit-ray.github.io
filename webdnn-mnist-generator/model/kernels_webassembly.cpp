
#include <stdlib.h>
#include <math.h>

float static_buffer[243167];
float* dynamic_buffer = nullptr;

int meta_buf_0[] = {243057,0,237249,1,1152,110};
int meta_buf_1[] = {126720,237249,238401,1152};
int meta_buf_2[] = {238401,239553,9,128,128,9};
int meta_buf_3[] = {239553,127872,228929,9,576,128};
int meta_buf_4[] = {234113,228929,1,3,3,64,7,7,3,3,2,2,0,0};
int meta_buf_5[] = {201600,201664,234113,234113,64,64,64,49};
int meta_buf_6[] = {234113,201728,222657,49,128,64};
int meta_buf_7[] = {216385,222657,1,7,7,32,14,14,2,2,2,2,0,0};
int meta_buf_8[] = {209952,209920,216385,210113,32,32,32,196};
int meta_buf_9[] = {210113,209984,241489,196,4,32};
int meta_buf_10[] = {240705,241489,1,14,14,1,28,28,2,2,2,2,0,0};
int meta_buf_11[] = {210112,240705,242273,784};
int* meta_buffers[] = {meta_buf_0,meta_buf_1,meta_buf_2,meta_buf_3,meta_buf_4,meta_buf_5,meta_buf_6,meta_buf_7,meta_buf_8,meta_buf_9,meta_buf_10,meta_buf_11};

extern "C" void init() {
    //static_buffer = (float*)malloc(243167 * sizeof(float));
}

extern "C" float* get_static_buffer(void) {
    return static_buffer;
}

extern "C" float* allocate_dynamic_buffer(int count) {
    if (dynamic_buffer) {
        free(dynamic_buffer);
        dynamic_buffer = nullptr;
    }
    dynamic_buffer = (float*)malloc(count * sizeof(float));
    return dynamic_buffer;
}

extern "C" float* get_dynamic_buffer(void) {
    return dynamic_buffer;
}
extern "C" void set_placeholder_value(int kernel_order, int offset, int value) {
    meta_buffers[kernel_order][offset] = value;
}

#ifndef INCLUDE_EIGEN
#define INCLUDE_EIGEN
#include <Eigen/Dense>
#endif

void tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(const int * meta_buffer)
{
    float *A = (static_buffer + meta_buffer[0]);
    float *B = (static_buffer + meta_buffer[1]);
    float *C = (static_buffer + meta_buffer[2]);

    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > a_mat(A, meta_buffer[3], meta_buffer[5]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::ColMajor> > b_mat(B, meta_buffer[5], meta_buffer[4]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > c_mat(C, meta_buffer[3], meta_buffer[4]);

    c_mat.noalias() = a_mat * b_mat;
}


void fusedelementwise_9d5b58d4f5a00a595e84c1773b477ca77b891512fffc1c7d24d35e3d(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int D0 = meta_buffer[3];
    int d0;
    for (d0 = 0; d0 < D0; d0 += 1) {
        const float v4 = v1[d0];
        const float v5 = v2[d0];
        float v6;
        {
            v6 = v5 + v4;
        }
        float v7;
        {
            v7 = v6 > 0 ? v6 : 0;
        }
        v3[d0] = v7;
    }
}


void transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    float * v2 = (static_buffer + meta_buffer[1]);
    const int v3 = meta_buffer[2];
    const int v4 = meta_buffer[3];
    const int D0 = meta_buffer[4];
    const int D1 = meta_buffer[5];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v5 = v1[d0*v3 + d1];
            float v6;
            {
                v6 = v5;
            }
            v2[d0 + d1*v4] = v6;
        }
    }
}


void col2im_73909fb9a6e4f41fa36d633023909781659562b6438922487c8f9efc(const int * meta_buffer)
{
    const float *col = (static_buffer + meta_buffer[1]);
    float *im = (static_buffer + meta_buffer[0]);

    const int N = meta_buffer[2];
    const int C1 = meta_buffer[5];
    const int H1 = meta_buffer[6];
    const int W1 = meta_buffer[7];
    const int H2 = meta_buffer[3];
    const int W2 = meta_buffer[4];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N*H1*W1*C1; gid += 1) {
        const int c1 = gid % C1;
        const int w1 = gid / C1 % W1;
        const int h1 = gid / C1 / W1 % H1;
        const int n = gid / C1 / W1 / H1;

        float sum = 0;
        for (int kh = 0; kh < KH; kh++) {
            const int h2 = (h1 + PH - kh) / SH;
            if ((h1 + PH - kh) % SH != 0 || h2 < 0 || h2 >= H2) continue;

            for (int kw = 0; kw < KW; kw++) {
                const int w2 = (w1 + PW - kw) / SW;
                if ((w1 + PW - kw) % SW != 0 || w2 < 0 || w2 >= W2) continue;

                sum += col[((((n * H2 + h2) * W2 + w2) * KH + kh) * KW + kw) * C1 + c1];
            }
        }

        im[gid] = sum;
    }
}


void fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int D0 = meta_buffer[6];
    const int D1 = meta_buffer[7];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v7 = v1[d0];
        const float v8 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v3[d0 + d1*v5];
            float v10;
            {
                v10 = v9 * v8;
            }
            float v11;
            {
                v11 = v10 + v7;
            }
            float v12;
            {
                v12 = v11 > 0 ? v11 : 0;
            }
            v4[d0 + d1*v6] = v12;
        }
    }
}


void fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int D0 = meta_buffer[6];
    const int D1 = meta_buffer[7];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v7 = v1[d0];
        const float v8 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v3[d0 + d1*v5];
            float v10;
            {
                v10 = v9 * v7;
            }
            float v11;
            {
                v11 = v10 + v8;
            }
            float v12;
            {
                v12 = v11 > 0 ? v11 : 0;
            }
            v4[d0 + d1*v6] = v12;
        }
    }
}


void fusedelementwise_8cc82283ee56269eeadd675215f5e9575511f18325de710bc5bc7a36(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int D0 = meta_buffer[3];
    int d0;
    for (d0 = 0; d0 < D0; d0 += 1) {
        const float v4 = v1[0];
        const float v5 = v2[d0];
        float v6;
        {
            v6 = v5 + v4;
        }
        float v7;
        {
            v7 = tanh(0.5f * v6) * 0.5f + 0.5f;
        }
        v3[d0] = v7;
    }
}

extern "C" void run() {
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_0);
fusedelementwise_9d5b58d4f5a00a595e84c1773b477ca77b891512fffc1c7d24d35e3d(meta_buf_1);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_2);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_3);
col2im_73909fb9a6e4f41fa36d633023909781659562b6438922487c8f9efc(meta_buf_4);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_5);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_6);
col2im_73909fb9a6e4f41fa36d633023909781659562b6438922487c8f9efc(meta_buf_7);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_8);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_9);
col2im_73909fb9a6e4f41fa36d633023909781659562b6438922487c8f9efc(meta_buf_10);
fusedelementwise_8cc82283ee56269eeadd675215f5e9575511f18325de710bc5bc7a36(meta_buf_11);

}

