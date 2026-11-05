
undefined4 FUN_0205e0f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + (uint)*(ushort *)((int)param_1 + 10) + 4);
  }
  return uVar1;
}

