
void FUN_02001404(int param_1)

{
  undefined4 uVar1;
  
                    /* JUS-TAG strings=["array->list","darray.c"] */
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc);
  uVar1 = func_0x02175824(*(undefined4 *)(param_1 + 0x14),
                          *(int *)(param_1 + 8) * *(int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_02002068(s_array_>list_02092f78,s_darray_c_02092f0c,0,0x41);
  }
  return;
}

