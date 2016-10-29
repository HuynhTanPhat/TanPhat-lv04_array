# TanPhat-lv04_array
###báo cáo học array
[Khái niệm](#Khái niệm)  
[1.Array](#Array)  
[2.Mảng một chiều](#Mảng một chiều)  
[3.Mảng hai chiều](#Mảng hai chiều)  

<a name="Khái niệm">
**Khái niệm**  
-Mảng được hiểu là một tập hợp các giá trị có cùng kiểu dữ liệu nằm liên tiếp nhau trong bộ nhớ máy tính.  
-Mảng dược coi như một biến mảng và tên mảng được đặt theo quy tắc tên biến.  
-Mảng gồm các thàng phần:  
  <li> Kiểu dữ liệu của các phần tư trong mảng.  
  <li> Tên mảng.  
  <li> Số chiều và kích thước của mỗi chiều.  

<a name="Array">
##1.Array

**Cú pháp**  
`<Kiểu dl> <tên mảng> <danh sách chiều của mảng>`  
**Ví dụ:**  
+`int A[10]` : Mảng 1 chiều A gồm 10 phần tử kiểu số nguyên.  
+`float B[2] [3]` : Mảng 2 chiều B gồm 2 hàng và 3 cột, kiểu số thực.  
**lưu ý:**  
các phần tử trong mảng phải cùng kiểu dữ liệu

<a name="Mảng một chiều">
##2.Mảng một chiều  
**Cú pháp**  
`<Kiểu dl> <tên mảng> [số phần tử của mảng]`  
**Ví dụ**  
+int a[5]: gồm 5 phần tử do người nhập tùy ý như {3,2,67,24,6}
+float b[10]: gồm 10 phần tử do người nhập tùy ý như {1,5,4,8,2,0,78,24,3,7}
**Lưu ý:**  
<li>Số phần tử mảng được xác định khi khai báo.  
<li>Sử dụng toán tử [] để truy cập phân tử của mảng.  
<li>Chỉ số các phần tử mảng được đánh số từ 0.  

<a name="Mảng hai chiều">
##3.Mảng hai chiều  
**Cú pháp**  
`<Kiểu dl> <tên mảng> [số hàng] [số cột]`  
**Ví dụ**  
+int a[5]
+float b[10]
**Lưu ý:**  
- Có thể hiểu các phần tử lập thành một ma trận. Khi lưu trữ trong bộ nhớ máy sẽ được chuyển về dưới dạng của mảng 1 chiều.  
- Chỉ số đầu tiên của hàng(cột) bắt đầu bằng số 0, kết thúc bằng số hàng (số cột) -1.  
