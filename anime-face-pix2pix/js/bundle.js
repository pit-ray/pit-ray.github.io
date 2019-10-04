/******/ (function(modules) { // webpackBootstrap
/******/ 	// The module cache
/******/ 	var installedModules = {};
/******/
/******/ 	// The require function
/******/ 	function __webpack_require__(moduleId) {
/******/
/******/ 		// Check if module is in cache
/******/ 		if(installedModules[moduleId]) {
/******/ 			return installedModules[moduleId].exports;
/******/ 		}
/******/ 		// Create a new module (and put it into the cache)
/******/ 		var module = installedModules[moduleId] = {
/******/ 			i: moduleId,
/******/ 			l: false,
/******/ 			exports: {}
/******/ 		};
/******/
/******/ 		// Execute the module function
/******/ 		modules[moduleId].call(module.exports, module, module.exports, __webpack_require__);
/******/
/******/ 		// Flag the module as loaded
/******/ 		module.l = true;
/******/
/******/ 		// Return the exports of the module
/******/ 		return module.exports;
/******/ 	}
/******/
/******/
/******/ 	// expose the modules object (__webpack_modules__)
/******/ 	__webpack_require__.m = modules;
/******/
/******/ 	// expose the module cache
/******/ 	__webpack_require__.c = installedModules;
/******/
/******/ 	// define getter function for harmony exports
/******/ 	__webpack_require__.d = function(exports, name, getter) {
/******/ 		if(!__webpack_require__.o(exports, name)) {
/******/ 			Object.defineProperty(exports, name, { enumerable: true, get: getter });
/******/ 		}
/******/ 	};
/******/
/******/ 	// define __esModule on exports
/******/ 	__webpack_require__.r = function(exports) {
/******/ 		if(typeof Symbol !== 'undefined' && Symbol.toStringTag) {
/******/ 			Object.defineProperty(exports, Symbol.toStringTag, { value: 'Module' });
/******/ 		}
/******/ 		Object.defineProperty(exports, '__esModule', { value: true });
/******/ 	};
/******/
/******/ 	// create a fake namespace object
/******/ 	// mode & 1: value is a module id, require it
/******/ 	// mode & 2: merge all properties of value into the ns
/******/ 	// mode & 4: return value when already ns object
/******/ 	// mode & 8|1: behave like require
/******/ 	__webpack_require__.t = function(value, mode) {
/******/ 		if(mode & 1) value = __webpack_require__(value);
/******/ 		if(mode & 8) return value;
/******/ 		if((mode & 4) && typeof value === 'object' && value && value.__esModule) return value;
/******/ 		var ns = Object.create(null);
/******/ 		__webpack_require__.r(ns);
/******/ 		Object.defineProperty(ns, 'default', { enumerable: true, value: value });
/******/ 		if(mode & 2 && typeof value != 'string') for(var key in value) __webpack_require__.d(ns, key, function(key) { return value[key]; }.bind(null, key));
/******/ 		return ns;
/******/ 	};
/******/
/******/ 	// getDefaultExport function for compatibility with non-harmony modules
/******/ 	__webpack_require__.n = function(module) {
/******/ 		var getter = module && module.__esModule ?
/******/ 			function getDefault() { return module['default']; } :
/******/ 			function getModuleExports() { return module; };
/******/ 		__webpack_require__.d(getter, 'a', getter);
/******/ 		return getter;
/******/ 	};
/******/
/******/ 	// Object.prototype.hasOwnProperty.call
/******/ 	__webpack_require__.o = function(object, property) { return Object.prototype.hasOwnProperty.call(object, property); };
/******/
/******/ 	// __webpack_public_path__
/******/ 	__webpack_require__.p = "";
/******/
/******/
/******/ 	// Load entry module and return exports
/******/ 	return __webpack_require__(__webpack_require__.s = 0);
/******/ })
/************************************************************************/
/******/ ({

/***/ "./src/js/canvas.js":
/*!**************************!*\
  !*** ./src/js/canvas.js ***!
  \**************************/
/*! no static exports found */
/***/ (function(module, exports) {

eval("const RED = \"#ff0000\" ;\r\nconst GREEN = \"#00ff00\" ;\r\nconst BLUE = \"#0000ff\" ;\r\n\r\n\r\nclass Circle {\r\n    constructor( init_x, init_y, init_r, init_rgb_hex, ctx, canvas ) {\r\n        this.x = init_x ;\r\n        this.y = init_y ;\r\n        this.r = init_r ;\r\n        this.rgb_hex = init_rgb_hex ;\r\n        this.ctx = ctx ;\r\n        this.canvas = canvas ;\r\n        this.is_select = false ;\r\n        this.is_changing_r = false ;\r\n        this.dblclicked_pos = []\r\n        this.pre_r = init_y ;\r\n\r\n        this.draw() ;\r\n    }\r\n\r\n    get_mouse_pos_oncanvas( event, canvas ) {\r\n        var rect = canvas.getBoundingClientRect() ;\r\n        var pos = [] ;\r\n        var cx = event.clientX ;\r\n        var cy = event.clientY ;\r\n\r\n        pos[0] = cx - rect.x ;\r\n        pos[1] = cy - rect.y ;\r\n\r\n        return pos.concat() ; //値渡し\r\n    }\r\n\r\n    is_on_obj( mouse_pos ) {\r\n        if( mouse_pos.length ) {\r\n            var x = mouse_pos[0] ;\r\n            var y = mouse_pos[1] ;\r\n\r\n            //触りやすいように少し大きめに選択領域をとる\r\n            var coef = 1.1\r\n            var select_r = coef * this.r \r\n\r\n            if( this.x - select_r <= x && this.x + select_r >= x &&\r\n                this.y - select_r <= y && this.y + select_r >= y ) {\r\n                return true ;\r\n            }\r\n            else {\r\n                return false ;\r\n            }\r\n        }\r\n    }\r\n\r\n    draw() {\r\n        const MAX_R = 200 ;\r\n        const MIN_R = 5 ;\r\n        if( this.r < MIN_R ) {\r\n            this.r = MIN_R ;\r\n        }\r\n        if( this.r > MAX_R ) {\r\n            this.r = MAX_R ;\r\n        }\r\n        this.ctx.fillStyle = this.rgb_hex ;\r\n        this.ctx.beginPath() ;\r\n        this.ctx.arc( this.x, this.y, this.r, 0, 2 * Math.PI, true ) ;\r\n        this.ctx.fill() ;\r\n    }\r\n\r\n    update( event ) {\r\n        if( this.is_select ) {\r\n            var pos = this.get_mouse_pos_oncanvas( event, this.canvas ) ;\r\n            this.x = pos[0] ;\r\n            this.y = pos[1] ;\r\n        }\r\n\r\n        this.draw() ;\r\n    }\r\n\r\n    change_r( event ) {\r\n        var rect = this.canvas.getBoundingClientRect() ;\r\n        var clicked_x = this.x + rect.x ;\r\n        var x = event.clientX ;\r\n\r\n        if( x > clicked_x ) {\r\n            this.r = this.pre_r + ( x - clicked_x ) ;\r\n        }\r\n        if( x < clicked_x ) {\r\n            this.r = this.pre_r - ( clicked_x - x ) ;\r\n        }\r\n        console.log( this.r ) ;\r\n        this.draw() ;\r\n    }\r\n\r\n    //イベント関数--------------------------------------------------------------\r\n    window_mousedown( event ) {\r\n        //canvasの外でクリックしても解除できるようにwindowのハンドラで制御する\r\n        if( this.is_changing_r ) {\r\n            //半径調整モードならば、クリックで解除する\r\n            this.is_changing_r = false ;\r\n        }\r\n    }\r\n\r\n    mousedown( event ) {\r\n        if( !this.is_changing_r ) {\r\n            var pos = this.get_mouse_pos_oncanvas( event, this.canvas ) ;\r\n            this.is_select = this.is_on_obj( pos ) ;\r\n            this.dblclicked_pos = pos ; //ダブルクリック時の1回目の座標を保持しておく\r\n            return this.is_select ;\r\n        }\r\n        return false ;\r\n    }\r\n\r\n    mouseup( event ) {\r\n        //選択解除\r\n        this.is_select = false ;\r\n    }\r\n\r\n    mousemove( event ) {\r\n        if( this.is_changing_r ) {\r\n            //半径調整モード\r\n            this.change_r( event ) ;\r\n        }\r\n        else {\r\n            //位置調整モード\r\n            this.update( event ) ;\r\n        }\r\n    }\r\n\r\n    dblclick( event ) {\r\n        //1クリック目にクリックしていたオブジェクトの上かどうか判別\r\n        if( this.is_on_obj( this.dblclicked_pos ) ) {\r\n            this.is_changing_r = true ;\r\n            this.pre_r = this.r ; //調整直前の半径を保持する\r\n            return true ;\r\n        }\r\n        else {\r\n            return false ;\r\n        }\r\n    }\r\n}\r\n\r\n\r\nwindow.addEventListener( \"DOMContentLoaded\", function() {\r\n    var canvas = document.getElementById( \"seed\" ) ;\r\n    var ctx = canvas.getContext( \"2d\" ) ;\r\n\r\n    var mouse_circle = new Circle( 100, 100, 10, RED, ctx, canvas ) ;\r\n    var eye1_circle = new Circle( 20, 20, 25, GREEN, ctx, canvas ) ;\r\n    var eye2_circle = new Circle( 50, 50, 25, GREEN, ctx, canvas ) ;\r\n    var nose_circle = new Circle( 150, 150, 10, BLUE, ctx, canvas ) ;\r\n\r\n    canvas.addEventListener( \"mousedown\", function( event ) {\r\n        var is_select = false ;\r\n        if( !is_select ) is_select = nose_circle.mousedown( event ) ;\r\n        if( !is_select ) is_select = eye1_circle.mousedown( event ) ;\r\n        if( !is_select ) is_select = eye2_circle.mousedown( event ) ;\r\n        if( !is_select ) is_select = mouse_circle.mousedown( event ) ;\r\n    }, false ) ;\r\n\r\n    canvas.addEventListener( \"mouseup\", function() {\r\n        nose_circle.mouseup() ;\r\n        eye1_circle.mouseup() ;\r\n        eye2_circle.mouseup() ;\r\n        mouse_circle.mouseup() ;\r\n    } ) ;\r\n\r\n    canvas.addEventListener( \"mousemove\", function( event ) {\r\n        ctx.clearRect( 0, 0, canvas.width, canvas.height ) ;\r\n        nose_circle.mousemove( event ) ;\r\n        eye1_circle.mousemove( event ) ;\r\n        eye2_circle.mousemove( event ) ;\r\n        mouse_circle.mousemove( event ) ;\r\n    }, false ) ;\r\n\r\n    canvas.addEventListener( \"dblclick\", function() {\r\n        var is_select = false ;\r\n        if( !is_select ) is_select = nose_circle.dblclick() ;\r\n        if( !is_select ) is_select = eye1_circle.dblclick() ;\r\n        if( !is_select ) is_select = eye2_circle.dblclick() ;\r\n        if( !is_select ) is_select = mouse_circle.dblclick() ;\r\n    }, false ) ;\r\n\r\n    window.addEventListener( \"mousedown\", function( event ) {\r\n        nose_circle.window_mousedown() ;\r\n        eye1_circle.window_mousedown() ;\r\n        eye2_circle.window_mousedown() ;\r\n        mouse_circle.window_mousedown() ;\r\n    } ) ;\r\n}, false ) ;\r\n\r\n\n\n//# sourceURL=webpack:///./src/js/canvas.js?");

/***/ }),

/***/ "./src/js/pix2pix.js":
/*!***************************!*\
  !*** ./src/js/pix2pix.js ***!
  \***************************/
/*! no static exports found */
/***/ (function(module, exports) {

eval("\n\n//# sourceURL=webpack:///./src/js/pix2pix.js?");

/***/ }),

/***/ "./src/js/tool_tabs.js":
/*!*****************************!*\
  !*** ./src/js/tool_tabs.js ***!
  \*****************************/
/*! no static exports found */
/***/ (function(module, exports) {

eval("\n\n//# sourceURL=webpack:///./src/js/tool_tabs.js?");

/***/ }),

/***/ 0:
/*!**************************************************************************!*\
  !*** multi ./src/js/canvas.js ./src/js/pix2pix.js ./src/js/tool_tabs.js ***!
  \**************************************************************************/
/*! no static exports found */
/***/ (function(module, exports, __webpack_require__) {

eval("__webpack_require__(/*! ./src/js/canvas.js */\"./src/js/canvas.js\");\n__webpack_require__(/*! ./src/js/pix2pix.js */\"./src/js/pix2pix.js\");\nmodule.exports = __webpack_require__(/*! ./src/js/tool_tabs.js */\"./src/js/tool_tabs.js\");\n\n\n//# sourceURL=webpack:///multi_./src/js/canvas.js_./src/js/pix2pix.js_./src/js/tool_tabs.js?");

/***/ })

/******/ });