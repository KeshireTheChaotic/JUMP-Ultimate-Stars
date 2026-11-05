
uint FUN_0207e5fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte local_c;
  byte local_b [3];
  undefined4 uStack_8;
  
  uStack_8 = param_4;
  iVar1 = func_0x021629a4(*(undefined4 *)(param_1 + 0xf8),param_2,param_3,local_b,&local_c);
  return (uint)local_b[0] | iVar1 << 0x10 | (uint)local_c << 8;
}

