
void FUN_02028384(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 0xf) >> 3 != 0) {
    if (*(undefined1 **)(param_1 + 0x40) != &LAB_0202836c) {
      *(undefined1 **)(param_1 + 0x40) = &LAB_0202836c;
    }
    bVar1 = *(byte *)(param_1 + 0x28) & 0xfb | (param_2 != 0) << 2;
    *(byte *)(param_1 + 0x28) = bVar1;
    FUN_02027834(param_1,0,param_2,bVar1,param_4);
    return;
  }
  *(int *)(param_1 + 0x40) = param_2;
  if ((*(byte *)(param_1 + 0x28) & 7) >> 2 == (uint)(param_2 != 0)) {
    return;
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb | (param_2 != 0) << 2;
  FUN_02027edc();
  return;
}

