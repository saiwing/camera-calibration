// The MIT License (MIT)
// 
// Copyright (c) 2015 Relja Ljubobratovic, ljubobratovic.relja@gmail.com
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
// 
// Description:
// Homography calculation module.
// 
// Author:
// Relja Ljubobratovic, ljubobratovic.relja@gmail.com


#ifndef HOMOGRAPHY_HPP_ERDRJZXL
#define HOMOGRAPHY_HPP_ERDRJZXL


#include <matrix.hpp>
#include <vector.hpp>

/*
 * Direct linear transformation algorithm for homography estimation.
 *
 * 1. Normalize
 * 2. Pack A
 * 3. Set null space to be H, then reshape to 3x3
 * 4. denormalize using H = inv(tgt_S)*H*src_S
 */
void DLT(const std::vector<cv::vec2r> &src_pts, const std::vector<cv::vec2r> &tgt_pts, cv::matrixr &H);

/*
 * Solve homography using least squares method.
 */
void solveLeastSquaresHomography(const std::vector<cv::vec2r> &src_pts, const std::vector<cv::vec2r> &tgt_pts, cv::matrixr &H);


#endif /* end of include guard: HOMOGRAPHY_HPP_ERDRJZXL */
