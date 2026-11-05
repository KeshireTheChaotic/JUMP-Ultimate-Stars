
void FUN_02001320(int *param_1)

{
  int iVar1;
  
                    /* JUS-TAG strings=["array","darray.c"] */
  if (param_1 == (int *)0x0) {
    FUN_02002068(s_array_02092f64,s_darray_c_02092f0c,0,0x69);
  }
  iVar1 = 0;
  if (0 < *param_1) {
    do {
      FUN_0200143c(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }
  func_0x02175814(param_1[5]);
  func_0x02175814(param_1);
  return;
}

