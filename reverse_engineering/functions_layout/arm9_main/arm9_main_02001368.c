
undefined4 * FUN_02001368(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG strings=["array","array->list","darray.c","elemSize"] */
  puVar1 = (undefined4 *)func_0x0217583c(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_02002068(s_array_02092f64,s_darray_c_02092f0c,0,0x52);
  }
  if (param_1 == 0) {
    FUN_02002068(s_elemSize_02092f6c,s_darray_c_02092f0c,0,0x53);
  }
  if (param_2 == 0) {
    param_2 = 8;
  }
  *puVar1 = 0;
  puVar1[1] = param_2;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  if (puVar1[1] == 0) {
    puVar1[5] = 0;
  }
  else {
    uVar2 = func_0x0217583c(puVar1[2] * puVar1[1]);
    puVar1[5] = uVar2;
    if (puVar1[5] == 0) {
      FUN_02002068(s_array_>list_02092f78,s_darray_c_02092f0c,0,0x5e);
    }
  }
  return puVar1;
}

