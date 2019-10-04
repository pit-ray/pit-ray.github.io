
#include <stdlib.h>
#include <math.h>

float static_buffer[65874662];
float* dynamic_buffer = nullptr;

int meta_buf_0[] = {64498406,64105190,65536,3,3,65536};
int meta_buf_1[] = {64105190,55782118,1,3,256,256,128,128,4,4,1,1,2,2,1,1};
int meta_buf_2[] = {55782118,0,46607078,16384,64,48};
int meta_buf_3[] = {46607078,45558502,64,16384,16384,64,1045220557};
int meta_buf_4[] = {45558502,53947110,16384,64,64,16384};
int meta_buf_5[] = {53947110,25635558,1,64,128,128,64,64,4,4,1,1,2,2,1,1};
int meta_buf_6[] = {25635558,3072,58665702,4096,128,1024};
int meta_buf_7[] = {134144,134272,58665702,59189990,128,4096,128,4096,1045220557};
int meta_buf_8[] = {59189990,58141414,4096,128,128,4096};
int meta_buf_9[] = {58141414,34024166,1,128,64,64,32,32,4,4,1,1,2,2,1,1};
int meta_buf_10[] = {34024166,134400,61811430,1024,256,2048};
int meta_buf_11[] = {658944,658688,61811430,62073574,256,1024,256,1024,1045220557};
int meta_buf_12[] = {62073574,62335718,1024,256,256,1024};
int meta_buf_13[] = {62335718,659200,65514214,1024,32,256};
int meta_buf_14[] = {65514214,65186534,32,1024,1024,32};
int meta_buf_15[] = {2,65186534,1,1024,0,65579750,32768,1024,32,32,1};
int meta_buf_16[] = {62073574,62597862,1024,256,256,1024};
int meta_buf_17[] = {62597862,667392,65612518,1024,32,256};
int meta_buf_18[] = {65612518,65546982,32,1024,1024,32};
int meta_buf_19[] = {2,65546982,1,1024,0,65645286,32768,1024,32,32,1};
int meta_buf_20[] = {65579750,65645286,47655654,1024,1024,32};
int meta_buf_21[] = {47655654,49752806,1024,1024,1024,1024};
int meta_buf_22[] = {49752806,48704230,1048576};
int meta_buf_23[] = {48704230,48704230,1024,1024};
int meta_buf_24[] = {48704230,50801382,1048576};
int meta_buf_25[] = {2,50801382,1024,1,0,51849958,1048576,1024,1024,1024,1};
int meta_buf_26[] = {62073574,62860006,1024,256,256,1024};
int meta_buf_27[] = {62860006,675584,65710822,1024,32,256};
int meta_buf_28[] = {65710822,65678054,32,1024,1024,32};
int meta_buf_29[] = {2,65678054,1024,1,0,65776358,32768,32,1024,1024,1};
int meta_buf_30[] = {65776358,51849958,65743590,32,1024,1024};
int meta_buf_31[] = {65743590,65809126,32768};
int meta_buf_32[] = {65809126,65841894,1024,32,32,1024};
int meta_buf_33[] = {65841894,683776,63122150,1024,256,32};
int meta_buf_34[] = {691968,63122150,62073574,63384294,256,1024,1024,1024,256};
int meta_buf_35[] = {63384294,63646438,1024,256,256,1024};
int meta_buf_36[] = {63646438,52898534,1,256,32,32,16,16,4,4,1,1,2,2,1,1};
int meta_buf_37[] = {52898534,691969,64826086,256,512,4096};
int meta_buf_38[] = {64826086,64957158,512,256,256,512,1045220557};
int meta_buf_39[] = {2789121,2789221,64695014,1,131072,100};
int meta_buf_40[] = {59714278,4,2,64695014,64957158,1,1,262144,1,16384,1024,262144,1,16384,1024,1,512,16,16,1,512,16,16,0,512};
int meta_buf_41[] = {59714278,15896421,37169894,256,4096,1024};
int meta_buf_42[] = {59976422,37169894,1,16,16,256,32,32,4,4,2,2,1,1};
int meta_buf_43[] = {20090981,20090725,59976422,60238566,256,1024,256,1024};
int meta_buf_44[] = {60238566,60500710,1024,256,256,1024};
int meta_buf_45[] = {60500710,20091237,65120998,1024,32,256};
int meta_buf_46[] = {65120998,65088230,32,1024,1024,32};
int meta_buf_47[] = {2,65088230,1024,1,0,65219302,32768,32,1024,1024,1};
int meta_buf_48[] = {60238566,60762854,1024,256,256,1024};
int meta_buf_49[] = {60762854,20099429,65252070,1024,32,256};
int meta_buf_50[] = {65252070,65153766,32,1024,1024,32};
int meta_buf_51[] = {2,65153766,1,1024,0,65317606,32768,1024,32,32,1};
int meta_buf_52[] = {60238566,61024998,1024,256,256,1024};
int meta_buf_53[] = {61024998,20107621,65350374,1024,32,256};
int meta_buf_54[] = {65350374,65284838,32,1024,1024,32};
int meta_buf_55[] = {2,65284838,1,1024,0,65383142,32768,1024,32,32,1};
int meta_buf_56[] = {65383142,65317606,40315622,1024,1024,32};
int meta_buf_57[] = {40315622,42412774,1024,1024,1024,1024};
int meta_buf_58[] = {42412774,41364198,1048576};
int meta_buf_59[] = {41364198,41364198,1024,1024};
int meta_buf_60[] = {41364198,43461350,1048576};
int meta_buf_61[] = {2,43461350,1024,1,0,44509926,1048576,1024,1024,1024,1};
int meta_buf_62[] = {65219302,44509926,65415910,32,1024,1024};
int meta_buf_63[] = {65415910,65448678,32768};
int meta_buf_64[] = {65448678,65481446,1024,32,32,1024};
int meta_buf_65[] = {65481446,20115813,61287142,1024,256,32};
int meta_buf_66[] = {20124005,60238566,61287142,61549286,1024,256,1024,256,1024};
int meta_buf_67[] = {57617126,4,2,61549286,63384294,1,1,524288,1,16384,512,524288,1,16384,512,1,256,32,32,1,256,32,32,0,256};
int meta_buf_68[] = {57617126,20124006,31927014,1024,2048,512};
int meta_buf_69[] = {56568550,31927014,1,32,32,128,64,64,4,4,2,2,1,1};
int meta_buf_70[] = {21172710,21172582,56568550,57092838,128,4096,128,4096};
int meta_buf_71[] = {36121318,4,2,57092838,59189990,1,1,1048576,1,16384,256,1048576,1,16384,256,1,128,64,64,1,128,64,64,0,128};
int meta_buf_72[] = {36121318,21172838,21441254,4096,1024,256};
int meta_buf_73[] = {38218470,21441254,1,64,64,64,128,128,4,4,2,2,1,1};
int meta_buf_74[] = {21434982,21435046,38218470,39267046,64,16384,64,16384};
int meta_buf_75[] = {29829862,4,2,39267046,45558502,1,1,2097152,1,16384,128,2097152,1,16384,128,1,64,128,128,1,64,128,128,0,64};
int meta_buf_76[] = {29829862,21435110,54995686,16384,48,128};
int meta_buf_77[] = {63908582,54995686,1,128,128,3,256,256,4,4,2,2,1,1};
int meta_buf_78[] = {63908582,64301798,3,65536,65536,3};
int* meta_buffers[] = {meta_buf_0,meta_buf_1,meta_buf_2,meta_buf_3,meta_buf_4,meta_buf_5,meta_buf_6,meta_buf_7,meta_buf_8,meta_buf_9,meta_buf_10,meta_buf_11,meta_buf_12,meta_buf_13,meta_buf_14,meta_buf_15,meta_buf_16,meta_buf_17,meta_buf_18,meta_buf_19,meta_buf_20,meta_buf_21,meta_buf_22,meta_buf_23,meta_buf_24,meta_buf_25,meta_buf_26,meta_buf_27,meta_buf_28,meta_buf_29,meta_buf_30,meta_buf_31,meta_buf_32,meta_buf_33,meta_buf_34,meta_buf_35,meta_buf_36,meta_buf_37,meta_buf_38,meta_buf_39,meta_buf_40,meta_buf_41,meta_buf_42,meta_buf_43,meta_buf_44,meta_buf_45,meta_buf_46,meta_buf_47,meta_buf_48,meta_buf_49,meta_buf_50,meta_buf_51,meta_buf_52,meta_buf_53,meta_buf_54,meta_buf_55,meta_buf_56,meta_buf_57,meta_buf_58,meta_buf_59,meta_buf_60,meta_buf_61,meta_buf_62,meta_buf_63,meta_buf_64,meta_buf_65,meta_buf_66,meta_buf_67,meta_buf_68,meta_buf_69,meta_buf_70,meta_buf_71,meta_buf_72,meta_buf_73,meta_buf_74,meta_buf_75,meta_buf_76,meta_buf_77,meta_buf_78};

extern "C" void init() {
    //static_buffer = (float*)malloc(65874662 * sizeof(float));
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


void im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(const int * meta_buffer)
{
    const float *im = (static_buffer + meta_buffer[0]);
    float *col = (static_buffer + meta_buffer[1]);

    const int N = meta_buffer[2];
    const int C1 = meta_buffer[3];
    const int H1 = meta_buffer[4];
    const int W1 = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int DH = meta_buffer[10];
    const int DW = meta_buffer[11];
    const int SH = meta_buffer[12];
    const int SW = meta_buffer[13];
    const int PH = meta_buffer[14];
    const int PW = meta_buffer[15];

    for (int gid = 0; gid < N*H2*W2*KH*KW*C1; gid += 1) {
        const int c1 = gid % C1;
        const int kw = gid / C1 % KW;
        const int kh = gid / C1 / KW % KH;
        const int w2 = gid / C1 / KW / KH % W2;
        const int h2 = gid / C1 / KW / KH / W2 % H2;
        const int  n = gid / C1 / KW / KH / W2 / H2;

        const int h1 = h2 * SH - PH + kh * DH;
        const int w1 = w2 * SW - PW + kw * DW;

        col[gid] = (h1 < 0 || h1 >= H1 || w1 < 0 || w1 >= W1) ? 0 : im[((n*H1+h1)*W1+w1)*C1+c1];
    }
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


void leakyrelu_0488682e6efb03270d0b76f3ee72946d92d2dc942d353f02aa998077(const int * meta_buffer)
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
                float slope = *((float *)(&meta_buffer[6]));
                v6 = v5 > 0 ? v5 : (v5 * slope);
            }
            v2[d0 + d1*v4] = v6;
        }
    }
}


void fusedelementwise_b07b24aa73d5eaf9203a0334b18c72918cfdda885ff5558a635d8651(const int * meta_buffer)
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
                v10 = v9 / v7;
            }
            float v11;
            {
                v11 = v10 + v8;
            }
            float v12;
            {
                float slope = *((float *)(&meta_buffer[8]));
                v12 = v11 > 0 ? v11 : (v11 * slope);
            }
            v4[d0*v6 + d1] = v12;
        }
    }
}


void fusedelementwise_48ae42977c0c9360d7f5b217e69d1edee561aefe307bac160f90a207(const int * meta_buffer)
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
                v10 = v9 / v8;
            }
            float v11;
            {
                v11 = v10 + v7;
            }
            float v12;
            {
                float slope = *((float *)(&meta_buffer[8]));
                v12 = v11 > 0 ? v11 : (v11 * slope);
            }
            v4[d0*v6 + d1] = v12;
        }
    }
}


void slice_e93cb9001d713a427a84b3228ec2940c50297af1d7ffc9a6101729b9(const int * meta_buffer)
{
    const char ndim = meta_buffer[0];

    const float *x = (static_buffer + meta_buffer[1]);
    const int *x_stride_in_y_order = (&(meta_buffer[2]));
    const int x_index_offset = meta_buffer[4];

    float *y = (static_buffer + meta_buffer[5]);
    const int y_size = meta_buffer[6];
    const int *y_shape = (&(meta_buffer[7]));
    const int *y_stride = (&(meta_buffer[9]));

    for (int y_index = 0; y_index < y_size; y_index++) {
        int x_index = x_index_offset;

        for (int d = 0; d < ndim; d++) {
            x_index += ((y_index / y_stride[d]) % y_shape[d]) * x_stride_in_y_order[d];
        }

        y[y_index] = x[x_index];
    }
}


void reshape_f6c88dc1fd9479f62d789912530e6a5c7c51c73de368540e8b8e1ceb(const int * meta_buffer )
{
    const float *x = (static_buffer + meta_buffer[0]);
    float *y = (static_buffer + meta_buffer[1]);

    const int N = meta_buffer[2];

    for (int gid = 0; gid < N; gid += 1) {
        y[gid] = x[gid];
    }
}


void softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int C = meta_buffer[3];

    for (int n = 0; n < N; n++) {
        float set_max = X[n * C];
        for (int c = 0; c < C; c++) {
            float val = X[n * C + c];
            if (val > set_max) {
                set_max = val;
            }
        }

        float sum_exp = 0.0F;
        for (int c = 0; c < C; c++) {
            float val = X[n * C + c];
            float exp_x = expf(val - set_max);
            sum_exp += exp_x;
            Y[n * C + c] = exp_x;
        }

        for (int c = 0; c < C; c++) {
            Y[n * C + c] /= sum_exp;
        }
    }
}


void fusedelementwise_d00fc1a051c0324839d9d77998c6f96f6d07854c399ff33958bf1ae3(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int D0 = meta_buffer[7];
    const int D1 = meta_buffer[8];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v8 = v1[0];
            const float v9 = v2[d0*v5 + d1];
            float v10;
            {
                v10 = v8 * v9;
            }
            const float v11 = v3[d0 + d1*v6];
            float v12;
            {
                v12 = v10 + v11;
            }
            v4[d0 + d1*v7] = v12;
        }
    }
}


void concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(const int * meta_buffer)
{
    float *y = (static_buffer + meta_buffer[0]);
    const int N = meta_buffer[2];
    const int D = meta_buffer[1];
    const int *y_offsets = (&(meta_buffer[23]));
    const int *x_shapes = (&(meta_buffer[15]));
    const int *x_strides_in_y = (&(meta_buffer[7]));

    int x_index = 0;

    for (int n = 0; n < N; n++) {
        const float *x = (meta_buffer[3+2+(n)]?static_buffer:dynamic_buffer) + meta_buffer[3 + (n)];
        const int y_offset = y_offsets[n];
        const int *x_shape = x_shapes + n * D;
        const int *x_stride_in_y = x_strides_in_y + n * D;

        int x_size = 1;
        for (int d = 0; d < D; d++) {
            x_size *= x_shape[d];
        }

        while (x_index < x_size) {
            int y_index = y_offset;
            int s = x_index;
            for (int d = D-1; d >= 0; d--) {
                y_index += x_stride_in_y[d] * (s % x_shape[d]);
                s /= x_shape[d];
            }

            y[y_index] = x[x_index];

            x_index++;
        }

        x_index -= x_size;
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


void fusedelementwise_0e06e39313bb6e2e60327855db8879f2a1b54c4c41e87557900cb55d(const int * meta_buffer)
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
                v10 = v9 / v7;
            }
            float v11;
            {
                v11 = v10 + v8;
            }
            float v12;
            {
                v12 = v11 > 0 ? v11 : 0;
            }
            v4[d0*v6 + d1] = v12;
        }
    }
}


void fusedelementwise_8e8ccf643ff07f20e8fbc71f8a1a6a2d672218c3c73613909a4c86f9(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int D0 = meta_buffer[7];
    const int D1 = meta_buffer[8];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v8 = v1[0];
            const float v9 = v3[d0 + d1*v6];
            float v10;
            {
                v10 = v8 * v9;
            }
            const float v11 = v2[d0*v5 + d1];
            float v12;
            {
                v12 = v10 + v11;
            }
            v4[d0*v7 + d1] = v12;
        }
    }
}


void fusedelementwise_165202bc62facc2cda78f1e47d32f58d501ef0eec3d4fd87b7617ac8(const int * meta_buffer)
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
                v10 = v9 / v8;
            }
            float v11;
            {
                v11 = v10 + v7;
            }
            float v12;
            {
                v12 = v11 > 0 ? v11 : 0;
            }
            v4[d0*v6 + d1] = v12;
        }
    }
}


void sigmoid_b368867eb6f9b8e3b202b640e2d12939d59639db0d68326cc224a89e(const int * meta_buffer)
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
                v6 = tanh(0.5f * v5) * 0.5f + 0.5f;
            }
            v2[d0 + d1*v4] = v6;
        }
    }
}

extern "C" void run() {
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_0);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_1);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_2);
leakyrelu_0488682e6efb03270d0b76f3ee72946d92d2dc942d353f02aa998077(meta_buf_3);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_4);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_5);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_6);
fusedelementwise_b07b24aa73d5eaf9203a0334b18c72918cfdda885ff5558a635d8651(meta_buf_7);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_8);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_9);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_10);
fusedelementwise_48ae42977c0c9360d7f5b217e69d1edee561aefe307bac160f90a207(meta_buf_11);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_12);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_13);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_14);
slice_e93cb9001d713a427a84b3228ec2940c50297af1d7ffc9a6101729b9(meta_buf_15);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_16);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_17);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_18);
slice_e93cb9001d713a427a84b3228ec2940c50297af1d7ffc9a6101729b9(meta_buf_19);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_20);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_21);
reshape_f6c88dc1fd9479f62d789912530e6a5c7c51c73de368540e8b8e1ceb(meta_buf_22);
softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(meta_buf_23);
reshape_f6c88dc1fd9479f62d789912530e6a5c7c51c73de368540e8b8e1ceb(meta_buf_24);
slice_e93cb9001d713a427a84b3228ec2940c50297af1d7ffc9a6101729b9(meta_buf_25);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_26);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_27);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_28);
slice_e93cb9001d713a427a84b3228ec2940c50297af1d7ffc9a6101729b9(meta_buf_29);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_30);
reshape_f6c88dc1fd9479f62d789912530e6a5c7c51c73de368540e8b8e1ceb(meta_buf_31);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_32);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_33);
fusedelementwise_d00fc1a051c0324839d9d77998c6f96f6d07854c399ff33958bf1ae3(meta_buf_34);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_35);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_36);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_37);
leakyrelu_0488682e6efb03270d0b76f3ee72946d92d2dc942d353f02aa998077(meta_buf_38);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_39);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_40);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_41);
col2im_73909fb9a6e4f41fa36d633023909781659562b6438922487c8f9efc(meta_buf_42);
fusedelementwise_0e06e39313bb6e2e60327855db8879f2a1b54c4c41e87557900cb55d(meta_buf_43);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_44);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_45);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_46);
slice_e93cb9001d713a427a84b3228ec2940c50297af1d7ffc9a6101729b9(meta_buf_47);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_48);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_49);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_50);
slice_e93cb9001d713a427a84b3228ec2940c50297af1d7ffc9a6101729b9(meta_buf_51);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_52);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_53);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_54);
slice_e93cb9001d713a427a84b3228ec2940c50297af1d7ffc9a6101729b9(meta_buf_55);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_56);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_57);
reshape_f6c88dc1fd9479f62d789912530e6a5c7c51c73de368540e8b8e1ceb(meta_buf_58);
softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(meta_buf_59);
reshape_f6c88dc1fd9479f62d789912530e6a5c7c51c73de368540e8b8e1ceb(meta_buf_60);
slice_e93cb9001d713a427a84b3228ec2940c50297af1d7ffc9a6101729b9(meta_buf_61);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_62);
reshape_f6c88dc1fd9479f62d789912530e6a5c7c51c73de368540e8b8e1ceb(meta_buf_63);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_64);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_65);
fusedelementwise_8e8ccf643ff07f20e8fbc71f8a1a6a2d672218c3c73613909a4c86f9(meta_buf_66);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_67);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_68);
col2im_73909fb9a6e4f41fa36d633023909781659562b6438922487c8f9efc(meta_buf_69);
fusedelementwise_0e06e39313bb6e2e60327855db8879f2a1b54c4c41e87557900cb55d(meta_buf_70);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_71);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_72);
col2im_73909fb9a6e4f41fa36d633023909781659562b6438922487c8f9efc(meta_buf_73);
fusedelementwise_165202bc62facc2cda78f1e47d32f58d501ef0eec3d4fd87b7617ac8(meta_buf_74);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_75);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_76);
col2im_73909fb9a6e4f41fa36d633023909781659562b6438922487c8f9efc(meta_buf_77);
sigmoid_b368867eb6f9b8e3b202b640e2d12939d59639db0d68326cc224a89e(meta_buf_78);

}

