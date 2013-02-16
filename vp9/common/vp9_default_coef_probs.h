/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
*/


/*Generated file, included by vp9_entropy.c*/


static const vp9_coeff_probs default_coef_probs_4x4[BLOCK_TYPES_4X4] = {
  { /* block Type 0 */
    { /* Coeff Band 0 */
      { 209,  89, 216, 242, 191, 190, 245, 191, 240, 235, 168 },
      { 142,  96, 196, 229, 173, 180, 233, 175, 247, 220, 174 },
      {  66,  89, 157, 205, 155, 171, 209, 156, 243, 200, 197 },
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
    }, { /* Coeff Band 1 */
      {   1, 159, 235, 246, 202, 197, 237, 186, 248, 223, 223 },
      {  96, 137, 223, 247, 203, 198, 242, 188, 241, 202, 209 },
      {  22,  95, 167, 243, 184, 196, 237, 187, 247, 221, 221 },
      {   3,  51,  81, 192, 125, 158, 220, 164, 242, 211, 197 }
    }, { /* Coeff Band 2 */
      {   1, 145, 226, 244, 196, 194, 240, 191, 247, 225, 233 },
      {  66, 127, 203, 240, 188, 189, 239, 188, 248, 225, 220 },
      {   9,  83, 136, 224, 159, 176, 235, 177, 247, 223, 207 },
      {   2,  46,  71, 169, 121, 152, 210, 149, 241, 212, 199 }
    }, { /* Coeff Band 3 */
      {   1, 174, 238, 249, 209, 201, 245, 198, 241, 196, 241 },
      {  76, 151, 223, 247, 203, 197, 245, 194, 243, 202, 198 },
      {  12, 102, 170, 240, 183, 187, 242, 191, 247, 225, 209 },
      {   1,  52,  85, 202, 135, 162, 225, 168, 240, 209, 221 }
    }, { /* Coeff Band 4 */
      {   1, 140, 230, 247, 204, 198, 242, 190, 249, 209, 248 },
      {  94, 126, 213, 244, 195, 194, 240, 190, 247, 210, 237 },
      {  13,  95, 159, 232, 171, 181, 237, 179, 245, 205, 237 },
      {   1,  51,  83, 186, 128, 158, 216, 154, 240, 193, 229 }
    }, { /* Coeff Band 5 */
      {   1, 218, 244, 251, 214, 202, 243, 199, 253, 214, 255 },
      {  91, 194, 238, 249, 210, 200, 247, 203, 251, 223, 255 },
      {  18, 140, 207, 247, 198, 194, 246, 203, 252, 213, 255 },
      {   3,  76, 126, 223, 156, 172, 233, 185, 251, 206, 255 }
    }, { /* Coeff Band 6 */
      {   1, 135, 235, 250, 210, 203, 246, 206, 251, 219, 241 },
      { 105, 120, 214, 246, 196, 196, 245, 195, 250, 216, 243 },
      {  24,  91, 154, 231, 166, 180, 241, 183, 250, 214, 242 },
      {   3,  53,  84, 183, 127, 157, 218, 153, 244, 195, 237 }
    }, { /* Coeff Band 7 */
      {   1,  83, 246, 252, 215, 208, 246, 206, 255, 237, 128 },
      { 184,  61, 233, 250, 208, 204, 245, 198, 254, 227, 255 },
      {  83,  58, 190, 246, 189, 195, 244, 198, 255, 229, 128 },
      {  41,  38, 125, 214, 144, 169, 229, 171, 251, 216, 255 }
    }
  }, { /* block Type 1 */
    { /* Coeff Band 0 */
      { 242,  73, 238, 244, 198, 192, 241, 189, 253, 226, 247 },
      { 171,  70, 204, 231, 180, 183, 228, 172, 247, 215, 221 },
      {  73,  62, 144, 202, 153, 169, 207, 153, 245, 199, 230 },
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
    }, { /* Coeff Band 1 */
      {   1, 163, 241, 245, 201, 192, 243, 191, 255, 229, 255 },
      { 165, 147, 230, 245, 201, 193, 244, 193, 255, 231, 255 },
      {  76, 109, 191, 243, 190, 193, 243, 192, 255, 231, 255 },
      {  22,  63, 111, 202, 138, 164, 225, 164, 252, 218, 248 }
    }, { /* Coeff Band 2 */
      {   1, 113, 225, 245, 201, 195, 238, 185, 254, 225, 255 },
      { 122, 105, 195, 236, 183, 186, 235, 180, 254, 227, 252 },
      {  38,  79, 135, 217, 154, 172, 229, 171, 253, 220, 250 },
      {   9,  53,  78, 161, 121, 151, 202, 141, 251, 207, 244 }
    }, { /* Coeff Band 3 */
      {   1, 150, 238, 250, 213, 202, 244, 194, 255, 236, 255 },
      { 140, 132, 223, 247, 204, 199, 243, 193, 255, 234, 255 },
      {  51, 101, 182, 240, 188, 189, 240, 186, 255, 232, 255 },
      {   6,  59, 100, 201, 137, 165, 225, 161, 252, 221, 249 }
    }, { /* Coeff Band 4 */
      {   1, 151, 233, 248, 205, 199, 248, 196, 255, 243, 255 },
      { 133, 140, 214, 244, 193, 193, 245, 194, 255, 236, 255 },
      {  27, 104, 168, 235, 172, 183, 243, 187, 254, 235, 255 },
      {   2,  61, 101, 202, 135, 164, 229, 167, 254, 223, 255 }
    }, { /* Coeff Band 5 */
      {   1, 227, 246, 254, 225, 215, 254, 217, 255, 255, 128 },
      { 132, 195, 239, 253, 219, 210, 252, 212, 255, 255, 128 },
      {  49, 143, 214, 251, 207, 204, 253, 212, 255, 238, 128 },
      {  11,  93, 151, 235, 169, 185, 247, 190, 255, 238, 128 }
    }, { /* Coeff Band 6 */
      {   1, 143, 237, 251, 213, 203, 249, 203, 255, 243, 128 },
      { 137, 120, 216, 246, 198, 196, 248, 199, 255, 240, 255 },
      {  50,  94, 166, 233, 169, 181, 245, 189, 255, 240, 255 },
      {   9,  56,  97, 190, 129, 158, 228, 159, 255, 226, 255 }
    }, { /* Coeff Band 7 */
      {   1,  96, 245, 254, 229, 216, 255, 212, 255, 255, 128 },
      { 179,  81, 234, 253, 217, 209, 255, 230, 255, 255, 128 },
      { 105,  56, 192, 248, 192, 197, 252, 212, 255, 205, 128 },
      {  53,  32, 133, 228, 151, 177, 250, 192, 255, 255, 128 }
    }
  }
};
static const vp9_coeff_probs default_hybrid_coef_probs_4x4[BLOCK_TYPES_4X4_HYBRID] = {
  { /* block Type 0 */
    { /* Coeff Band 0 */
      { 191,  34, 178, 193, 160, 173, 196, 142, 247, 191, 244 },
      {  84,  45, 129, 187, 145, 170, 189, 145, 240, 186, 212 },
      {  14,  36,  69, 149, 120, 154, 177, 136, 231, 177, 196 },
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
    }, { /* Coeff Band 1 */
      {   1,  76, 169, 226, 167, 180, 227, 171, 247, 218, 226 },
      {  72,  75, 162, 226, 166, 181, 231, 172, 242, 200, 219 },
      {  30,  63, 130, 218, 153, 175, 226, 170, 247, 216, 219 },
      {   5,  39,  67, 156, 119, 151, 194, 140, 239, 202, 216 }
    }, { /* Coeff Band 2 */
      {   1,  79, 182, 228, 175, 183, 224, 170, 247, 215, 220 },
      {  69,  77, 168, 224, 170, 180, 223, 168, 246, 215, 223 },
      {  24,  63, 126, 209, 153, 171, 219, 160, 247, 215, 225 },
      {   3,  35,  58, 151, 115, 151, 191, 138, 240, 199, 220 }
    }, { /* Coeff Band 3 */
      {   1, 139, 213, 238, 194, 192, 234, 180, 244, 193, 236 },
      {  82, 127, 204, 238, 190, 186, 234, 175, 244, 191, 235 },
      {  26,  93, 161, 230, 173, 179, 233, 178, 249, 217, 241 },
      {   3,  48,  78, 186, 132, 158, 212, 157, 244, 205, 233 }
    }, { /* Coeff Band 4 */
      {   1, 100, 208, 233, 180, 182, 238, 175, 250, 206, 225 },
      {  84,  87, 184, 230, 175, 180, 236, 179, 250, 209, 243 },
      {  14,  61, 111, 217, 146, 171, 236, 174, 249, 207, 245 },
      {   1,  32,  49, 150, 106, 142, 212, 145, 242, 191, 237 }
    }, { /* Coeff Band 5 */
      {   1, 130, 223, 241, 192, 189, 231, 176, 250, 209, 246 },
      { 101, 120, 207, 239, 188, 187, 240, 196, 250, 202, 255 },
      {  19,  90, 155, 232, 169, 181, 238, 190, 250, 207, 249 },
      {   1,  54,  86, 197, 130, 161, 220, 170, 248, 196, 248 }
    }, { /* Coeff Band 6 */
      {   1, 103, 208, 236, 183, 185, 235, 190, 243, 202, 219 },
      {  95,  92, 185, 230, 175, 181, 233, 174, 242, 203, 225 },
      {  24,  72, 131, 213, 152, 171, 226, 164, 241, 202, 220 },
      {   3,  45,  74, 169, 123, 154, 204, 145, 238, 188, 222 }
    }, { /* Coeff Band 7 */
      {   1,  63, 236, 247, 205, 194, 241, 189, 252, 222, 255 },
      { 151,  48, 224, 245, 200, 193, 240, 187, 255, 234, 255 },
      {  76,  45, 178, 240, 180, 189, 239, 182, 253, 231, 255 },
      {  38,  31, 111, 187, 125, 154, 217, 155, 253, 214, 255 }
    }
  }
};
static const vp9_coeff_probs default_coef_probs_8x8[BLOCK_TYPES_8X8] = {
  { /* block Type 0 */
    { /* Coeff Band 0 */
      { 140, 101, 214, 227, 176, 182, 218, 167, 233, 205, 164 },
      {  96, 101, 176, 204, 161, 173, 193, 152, 223, 182, 182 },
      {  27,  84, 123, 176, 140, 162, 190, 142, 238, 189, 210 },
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
    }, { /* Coeff Band 1 */
      {   1, 178, 218, 240, 189, 189, 238, 184, 250, 232, 189 },
      {  69, 146, 204, 239, 187, 189, 238, 183, 251, 226, 221 },
      {  16,  98, 157, 234, 170, 185, 237, 183, 252, 220, 218 },
      {   3,  49,  78, 172, 122, 154, 204, 150, 242, 198, 207 }
    }, { /* Coeff Band 2 */
      {   1, 165, 207, 230, 179, 181, 234, 172, 252, 228, 218 },
      {  25, 130, 175, 224, 169, 177, 232, 169, 252, 230, 207 },
      {   4,  81, 118, 205, 144, 167, 227, 162, 252, 225, 219 },
      {   2,  51,  63, 150, 114, 148, 197, 138, 244, 202, 204 }
    }, { /* Coeff Band 3 */
      {   1, 181, 222, 247, 200, 197, 246, 199, 252, 232, 228 },
      {  25, 142, 200, 244, 190, 193, 245, 195, 253, 233, 204 },
      {   3,  90, 146, 233, 166, 181, 242, 188, 252, 229, 216 },
      {   1,  47,  79, 188, 124, 157, 222, 162, 245, 213, 203 }
    }, { /* Coeff Band 4 */
      {   1, 179, 220, 242, 195, 191, 237, 182, 251, 217, 231 },
      {  27, 144, 200, 241, 188, 190, 238, 185, 250, 224, 235 },
      {   3,  93, 149, 230, 166, 180, 235, 180, 249, 222, 221 },
      {   1,  47,  79, 181, 125, 157, 211, 154, 241, 205, 198 }
    }, { /* Coeff Band 5 */
      {   1, 176, 222, 247, 202, 198, 247, 199, 252, 234, 219 },
      {  24, 139, 197, 244, 190, 192, 246, 196, 253, 232, 220 },
      {   2,  89, 140, 229, 161, 178, 243, 185, 253, 233, 234 },
      {   1,  49,  76, 176, 121, 154, 214, 153, 243, 209, 208 }
    }, { /* Coeff Band 6 */
      {   1, 197, 233, 251, 213, 205, 247, 206, 249, 222, 247 },
      {  35, 159, 216, 249, 203, 201, 246, 203, 250, 222, 223 },
      {   4, 108, 167, 240, 178, 188, 244, 195, 248, 220, 235 },
      {   1,  58,  93, 198, 133, 161, 220, 167, 233, 195, 221 }
    }, { /* Coeff Band 7 */
      {   1, 188, 240, 253, 221, 209, 248, 207, 252, 223, 255 },
      {  84, 153, 227, 251, 212, 205, 247, 205, 254, 215, 255 },
      {  25, 117, 182, 244, 186, 192, 243, 198, 250, 209, 255 },
      {   7,  72, 108, 197, 138, 162, 203, 161, 240, 178, 247 }
    }
  }, { /* block Type 1 */
    { /* Coeff Band 0 */
      { 229,  64, 235, 236, 189, 190, 227, 179, 247, 203, 226 },
      { 148,  70, 194, 228, 175, 182, 216, 170, 238, 192, 224 },
      {  53,  63, 134, 207, 150, 169, 213, 161, 247, 204, 232 },
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
    }, { /* Coeff Band 1 */
      {   1, 173, 234, 244, 201, 193, 239, 180, 252, 214, 255 },
      { 160, 156, 222, 243, 200, 193, 237, 179, 253, 216, 255 },
      {  55, 119, 187, 240, 189, 192, 236, 180, 253, 226, 255 },
      {  14,  65, 105, 193, 142, 165, 205, 151, 249, 200, 250 }
    }, { /* Coeff Band 2 */
      {   1, 124, 218, 246, 195, 196, 242, 198, 254, 229, 255 },
      {  85, 114, 180, 240, 179, 187, 239, 191, 253, 223, 239 },
      {  18,  81, 128, 220, 152, 173, 232, 176, 252, 221, 254 },
      {   2,  42,  64, 150, 115, 149, 192, 137, 247, 197, 247 }
    }, { /* Coeff Band 3 */
      {   1, 164, 230, 251, 210, 204, 245, 201, 255, 238, 255 },
      {  96, 137, 210, 248, 199, 199, 244, 198, 254, 218, 255 },
      {  20,  97, 169, 240, 179, 188, 242, 190, 254, 228, 255 },
      {   2,  58,  95, 197, 137, 164, 220, 158, 252, 217, 248 }
    }, { /* Coeff Band 4 */
      {   1, 193, 236, 245, 203, 194, 243, 191, 254, 223, 255 },
      {  86, 163, 217, 241, 190, 188, 242, 189, 253, 220, 255 },
      {  14, 108, 161, 228, 167, 178, 238, 180, 253, 224, 255 },
      {   1,  51,  84, 186, 127, 159, 216, 155, 251, 208, 243 }
    }, { /* Coeff Band 5 */
      {   1, 183, 235, 248, 209, 197, 244, 195, 253, 236, 239 },
      {  79, 144, 208, 243, 193, 190, 244, 191, 254, 231, 255 },
      {  13, 100, 151, 227, 163, 176, 240, 180, 255, 233, 244 },
      {   1,  48,  77, 171, 121, 153, 214, 150, 252, 214, 245 }
    }, { /* Coeff Band 6 */
      {   1, 202, 234, 252, 215, 207, 248, 207, 254, 242, 255 },
      {  75, 153, 216, 249, 203, 201, 248, 203, 255, 239, 255 },
      {  11, 104, 168, 241, 179, 189, 245, 194, 255, 237, 128 },
      {   1,  57,  95, 201, 134, 163, 229, 165, 254, 223, 246 }
    }, { /* Coeff Band 7 */
      {   1, 184, 236, 254, 222, 212, 254, 225, 255, 255, 128 },
      {  74, 149, 220, 252, 210, 208, 253, 223, 255, 249, 128 },
      {  18, 109, 175, 247, 184, 195, 253, 211, 255, 250, 128 },
      {   3,  64, 113, 219, 144, 171, 246, 187, 255, 250, 128 }
    }
  }
};
static const vp9_coeff_probs default_hybrid_coef_probs_8x8[BLOCK_TYPES_8X8_HYBRID] = {
  { /* block Type 0 */
    { /* Coeff Band 0 */
      { 118,  27, 105, 170, 137, 166, 183, 137, 243, 189, 241 },
      {  44,  34,  85, 142, 127, 158, 161, 128, 232, 174, 213 },
      {   8,  26,  47, 104, 108, 145, 143, 117, 226, 168, 207 },
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
    }, { /* Coeff Band 1 */
      {   1, 134, 172, 217, 163, 175, 226, 167, 251, 220, 204 },
      {  56, 129, 168, 217, 161, 174, 223, 164, 249, 218, 223 },
      {  20, 110, 151, 215, 158, 174, 221, 165, 249, 209, 221 },
      {   2,  59,  88, 169, 128, 157, 192, 143, 239, 189, 214 }
    }, { /* Coeff Band 2 */
      {   1,  65, 126, 191, 140, 163, 218, 153, 252, 218, 229 },
      {  21,  57,  92, 175, 126, 156, 214, 148, 252, 218, 229 },
      {   4,  44,  66, 148, 114, 148, 200, 136, 251, 211, 228 },
      {   1,  28,  42, 108, 104, 141, 158, 119, 235, 180, 210 }
    }, { /* Coeff Band 3 */
      {   1, 114, 172, 227, 166, 177, 236, 178, 252, 226, 233 },
      {  41,  94, 152, 218, 156, 172, 233, 172, 251, 223, 231 },
      {   9,  69, 116, 202, 142, 165, 226, 162, 251, 221, 227 },
      {   1,  36,  60, 151, 113, 148, 195, 140, 241, 198, 211 }
    }, { /* Coeff Band 4 */
      {   1, 186, 200, 227, 174, 178, 230, 169, 248, 210, 238 },
      {  27, 148, 181, 221, 167, 176, 226, 166, 250, 218, 228 },
      {   3,  96, 139, 208, 154, 170, 219, 161, 249, 214, 229 },
      {   1,  44,  70, 156, 120, 152, 188, 139, 239, 193, 200 }
    }, { /* Coeff Band 5 */
      {   1, 169, 203, 238, 186, 186, 238, 184, 252, 224, 230 },
      {  32, 119, 173, 232, 172, 181, 236, 182, 252, 222, 237 },
      {   6,  84, 128, 215, 150, 170, 232, 172, 251, 221, 235 },
      {   1,  49,  78, 167, 124, 154, 200, 145, 243, 198, 217 }
    }, { /* Coeff Band 6 */
      {   1, 193, 215, 244, 197, 195, 239, 192, 249, 213, 240 },
      {  52, 136, 193, 239, 184, 189, 237, 189, 248, 211, 226 },
      {  13,  90, 146, 227, 162, 178, 233, 182, 248, 211, 231 },
      {   1,  49,  79, 177, 124, 156, 201, 154, 234, 188, 212 }
    }, { /* Coeff Band 7 */
      {   1, 189, 238, 248, 219, 196, 232, 180, 253, 211, 255 },
      { 104, 148, 224, 245, 211, 194, 225, 171, 251, 206, 255 },
      {  43, 116, 190, 231, 179, 183, 217, 168, 249, 199, 255 },
      {  13,  65,  92, 154, 131, 152, 167, 132, 238, 174, 243 }
    }
  }
};
static const vp9_coeff_probs default_coef_probs_16x16[BLOCK_TYPES_16X16] = {
  { /* block Type 0 */
    { /* Coeff Band 0 */
      {  14,  78, 225, 217, 173, 181, 198, 153, 228, 185, 176 },
      {   9,  74, 179, 191, 157, 171, 178, 143, 229, 175, 209 },
      {   3,  48,  92, 128, 130, 155, 135, 123, 220, 155, 219 },
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
    }, { /* Coeff Band 1 */
      {   1, 178, 209, 214, 173, 175, 208, 152, 252, 210, 237 },
      { 142, 151, 193, 212, 170, 175, 209, 151, 251, 208, 237 },
      {  38, 105, 150, 206, 159, 173, 208, 151, 250, 209, 238 },
      {   5,  44,  61, 128, 114, 147, 167, 125, 239, 184, 217 }
    }, { /* Coeff Band 2 */
      {   1, 154, 195, 202, 166, 173, 184, 144, 245, 184, 236 },
      {  49, 110, 150, 188, 155, 168, 180, 141, 244, 183, 239 },
      {   4,  63,  90, 158, 132, 157, 171, 134, 243, 179, 239 },
      {   1,  25,  37,  93, 104, 141, 133, 114, 231, 161, 226 }
    }, { /* Coeff Band 3 */
      {   1, 184, 201, 223, 173, 177, 224, 164, 253, 220, 238 },
      {  42, 127, 170, 215, 164, 173, 223, 162, 253, 219, 233 },
      {   4,  75, 114, 195, 142, 164, 218, 155, 253, 217, 235 },
      {   1,  32,  50, 128, 108, 144, 180, 127, 247, 197, 219 }
    }, { /* Coeff Band 4 */
      {   1, 190, 207, 232, 181, 184, 228, 172, 251, 216, 212 },
      {  35, 136, 180, 227, 173, 180, 227, 171, 251, 216, 218 },
      {   2,  85, 131, 214, 154, 173, 224, 166, 250, 214, 225 },
      {   1,  44,  71, 162, 120, 153, 195, 143, 240, 195, 197 }
    }, { /* Coeff Band 5 */
      {   1, 185, 201, 230, 177, 180, 232, 172, 253, 225, 235 },
      {  27, 122, 165, 221, 164, 175, 230, 169, 253, 224, 220 },
      {   1,  72, 108, 197, 139, 163, 224, 159, 253, 224, 226 },
      {   1,  33,  51, 132, 107, 144, 186, 130, 245, 201, 206 }
    }, { /* Coeff Band 6 */
      {   1, 203, 214, 240, 193, 191, 235, 178, 252, 225, 224 },
      {  20, 140, 188, 235, 182, 186, 234, 177, 252, 226, 226 },
      {   1,  85, 132, 218, 155, 174, 230, 170, 251, 224, 227 },
      {   1,  39,  62, 154, 114, 150, 199, 141, 241, 203, 214 }
    }, { /* Coeff Band 7 */
      {   1, 217, 224, 244, 202, 193, 241, 187, 252, 227, 239 },
      {  22, 151, 200, 239, 187, 188, 240, 184, 252, 226, 237 },
      {   2,  90, 138, 222, 158, 174, 237, 176, 252, 226, 239 },
      {   1,  41,  66, 163, 116, 151, 206, 146, 243, 201, 230 }
    }
  }, { /* block Type 1 */
    { /* Coeff Band 0 */
      { 223,  34, 236, 234, 193, 185, 216, 169, 239, 189, 229 },
      { 125,  40, 195, 221, 173, 175, 209, 165, 220, 181, 196 },
      {  41,  37, 127, 185, 145, 162, 191, 150, 227, 180, 219 },
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
    }, { /* Coeff Band 1 */
      {   1, 160, 224, 239, 193, 190, 213, 178, 244, 174, 255 },
      { 199, 154, 212, 238, 190, 190, 210, 173, 246, 183, 249 },
      {  88, 122, 178, 234, 180, 187, 213, 174, 244, 182, 247 },
      {  27,  69, 100, 174, 139, 165, 159, 142, 225, 157, 240 }
    }, { /* Coeff Band 2 */
      {   1, 118, 207, 237, 179, 185, 234, 189, 241, 194, 237 },
      {  86, 103, 161, 227, 163, 176, 231, 183, 241, 196, 234 },
      {  19,  69, 113, 205, 140, 166, 220, 169, 240, 188, 242 },
      {   3,  32,  49, 106, 111, 144, 132, 121, 225, 151, 237 }
    }, { /* Coeff Band 3 */
      {   1, 160, 218, 245, 197, 195, 235, 189, 254, 218, 255 },
      {  90, 127, 193, 240, 186, 189, 235, 187, 251, 217, 230 },
      {  18,  92, 148, 229, 164, 179, 228, 180, 254, 212, 229 },
      {   2,  50,  79, 163, 126, 156, 186, 140, 247, 191, 236 }
    }, { /* Coeff Band 4 */
      {   1, 196, 231, 240, 203, 191, 225, 171, 253, 214, 255 },
      {  71, 167, 210, 234, 194, 188, 218, 165, 253, 215, 236 },
      {  11, 119, 165, 217, 171, 177, 213, 155, 252, 209, 255 },
      {   1,  46,  70, 145, 121, 153, 180, 131, 249, 192, 246 }
    }, { /* Coeff Band 5 */
      {   1, 176, 223, 242, 202, 194, 222, 169, 253, 211, 244 },
      {  62, 131, 191, 233, 185, 186, 219, 164, 251, 211, 252 },
      {   7,  89, 133, 207, 156, 173, 211, 157, 251, 206, 247 },
      {   1,  36,  56, 127, 113, 147, 166, 125, 243, 183, 242 }
    }, { /* Coeff Band 6 */
      {   1, 203, 232, 249, 213, 202, 245, 193, 254, 237, 255 },
      {  51, 155, 212, 245, 199, 195, 244, 192, 254, 234, 255 },
      {   7, 101, 158, 233, 170, 181, 244, 185, 253, 242, 255 },
      {   1,  49,  82, 185, 123, 157, 226, 156, 252, 225, 240 }
    }, { /* Coeff Band 7 */
      {   1, 222, 233, 252, 220, 207, 247, 206, 255, 240, 128 },
      {  40, 159, 216, 250, 205, 201, 248, 207, 249, 219, 255 },
      {   6, 106, 163, 240, 176, 188, 247, 198, 251, 222, 255 },
      {   1,  51,  88, 196, 127, 159, 232, 169, 252, 214, 255 }
    }
  }
};
static const vp9_coeff_probs default_hybrid_coef_probs_16x16[BLOCK_TYPES_16X16_HYBRID] = {
  { /* block Type 0 */
    { /* Coeff Band 0 */
      {   3,  29,  86, 140, 130, 163, 135, 131, 190, 148, 186 },
      {   1,  26,  61, 105, 124, 156, 105, 119, 178, 138, 173 },
      {   1,  15,  28,  60, 105, 142,  80, 105, 173, 128, 178 },
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
    }, { /* Coeff Band 1 */
      {   1, 130, 142, 172, 141, 161, 191, 140, 244, 193, 216 },
      {  61, 124, 141, 173, 141, 161, 190, 139, 244, 194, 215 },
      {  28, 103, 124, 171, 138, 160, 190, 140, 243, 194, 225 },
      {   1,  36,  51, 111, 109, 144, 152, 120, 227, 173, 205 }
    }, { /* Coeff Band 2 */
      {   1,  60, 125, 153, 143, 159, 156, 127, 234, 170, 233 },
      {  22,  48,  78, 129, 124, 152, 151, 123, 234, 170, 233 },
      {   3,  32,  46,  98, 107, 142, 138, 114, 232, 165, 232 },
      {   1,  15,  23,  61,  96, 135, 101, 103, 210, 144, 213 }
    }, { /* Coeff Band 3 */
      {   1, 102, 144, 182, 146, 162, 194, 143, 246, 196, 239 },
      {  34,  76, 116, 171, 136, 159, 192, 140, 246, 195, 239 },
      {   4,  51,  81, 153, 124, 153, 184, 135, 246, 192, 239 },
      {   1,  23,  37,  98, 102, 140, 142, 116, 230, 167, 227 }
    }, { /* Coeff Band 4 */
      {   1, 165, 171, 214, 163, 174, 214, 160, 245, 203, 219 },
      {  16, 120, 154, 210, 158, 172, 212, 159, 245, 201, 219 },
      {   1,  80, 122, 199, 147, 167, 208, 154, 244, 200, 223 },
      {   1,  40,  65, 145, 118, 151, 171, 135, 226, 175, 202 }
    }, { /* Coeff Band 5 */
      {   1, 146, 162, 215, 159, 172, 226, 165, 251, 218, 231 },
      {  16,  92, 131, 205, 147, 167, 224, 162, 252, 217, 228 },
      {   2,  60,  92, 182, 129, 158, 216, 152, 251, 214, 234 },
      {   1,  32,  50, 126, 107, 144, 176, 128, 240, 189, 216 }
    }, { /* Coeff Band 6 */
      {   1, 178, 186, 224, 172, 178, 224, 167, 251, 214, 232 },
      {  14, 118, 158, 215, 160, 173, 223, 164, 250, 214, 228 },
      {   2,  70, 109, 194, 139, 164, 217, 156, 250, 213, 227 },
      {   1,  32,  51, 129, 108, 146, 175, 128, 240, 187, 218 }
    }, { /* Coeff Band 7 */
      {   1, 210, 214, 240, 192, 188, 235, 182, 251, 221, 228 },
      {  22, 140, 187, 233, 177, 183, 234, 178, 251, 219, 233 },
      {   3,  82, 130, 215, 152, 171, 229, 171, 250, 217, 232 },
      {   1,  38,  63, 154, 115, 149, 195, 141, 240, 196, 219 }
    }
  }
};
static const vp9_coeff_probs default_coef_probs_32x32[BLOCK_TYPES_32X32] = {
  { /* block Type 0 */
    { /* Coeff Band 0 */
      {   8,  40, 224, 217, 183, 181, 180, 148, 200, 180, 123 },
      {   6,  37, 178, 193, 173, 171, 160, 139, 205, 166, 173 },
      {   3,  27,  93, 133, 143, 159, 115, 125, 183, 141, 178 },
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
    }, { /* Coeff Band 1 */
      {   1, 170, 209, 202, 172, 175, 179, 143, 238, 181, 214 },
      { 184, 164, 199, 199, 169, 173, 180, 143, 238, 184, 217 },
      {  99, 128, 165, 194, 161, 171, 180, 142, 239, 182, 219 },
      {  17,  49,  59, 102, 117, 148, 122, 116, 208, 152, 191 }
    }, { /* Coeff Band 2 */
      {   1, 136, 200, 197, 172, 172, 168, 142, 226, 170, 216 },
      {  66, 104, 146, 175, 152, 165, 163, 139, 225, 170, 219 },
      {  11,  52,  83, 144, 130, 156, 151, 130, 222, 165, 216 },
      {   1,  16,  25,  65,  99, 137,  96, 106, 190, 138, 184 }
    }, { /* Coeff Band 3 */
      {   1, 180, 203, 198, 166, 170, 190, 143, 241, 190, 227 },
      {  74, 125, 161, 187, 154, 165, 187, 142, 241, 189, 224 },
      {  15,  70,  98, 163, 133, 157, 182, 137, 241, 187, 226 },
      {   1,  25,  37,  89, 104, 140, 128, 113, 218, 158, 206 }
    }, { /* Coeff Band 4 */
      {   1, 191, 208, 213, 169, 173, 212, 156, 246, 206, 217 },
      {  53, 136, 170, 205, 159, 170, 211, 156, 246, 205, 208 },
      {   3,  75, 112, 189, 140, 163, 209, 151, 246, 205, 215 },
      {   1,  32,  51, 127, 108, 145, 171, 128, 231, 183, 197 }
    }, { /* Coeff Band 5 */
      {   1, 183, 195, 202, 161, 168, 206, 150, 247, 202, 229 },
      {  42, 113, 144, 190, 147, 163, 203, 148, 247, 202, 229 },
      {   2,  56,  82, 160, 124, 153, 195, 140, 246, 200, 229 },
      {   1,  22,  34,  93,  99, 138, 143, 115, 227, 170, 206 }
    }, { /* Coeff Band 6 */
      {   1, 202, 193, 221, 168, 175, 227, 167, 251, 217, 236 },
      {  26, 122, 158, 213, 157, 171, 225, 165, 251, 216, 242 },
      {   1,  68, 105, 194, 136, 162, 221, 158, 251, 215, 239 },
      {   1,  32,  51, 131, 107, 145, 179, 130, 240, 188, 231 }
    }, { /* Coeff Band 7 */
      {   1, 234, 212, 243, 195, 192, 240, 187, 253, 226, 227 },
      {  14, 141, 186, 237, 181, 186, 239, 184, 253, 226, 233 },
      {   1,  85, 132, 221, 155, 174, 235, 176, 253, 224, 226 },
      {   1,  39,  65, 159, 115, 150, 202, 144, 245, 202, 214 }
    }
  }
};
