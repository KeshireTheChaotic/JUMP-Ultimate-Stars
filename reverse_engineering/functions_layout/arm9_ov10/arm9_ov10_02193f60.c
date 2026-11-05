
void FUN_02193f60(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x82c);
  if (param_1 < (uint)(*(int *)(iVar2 + 0x828) - iVar1)) {
    *(int *)(iVar2 + 0x82c) = iVar1 + param_1;
    return;
  }
  if (*(int *)(iVar2 + 0x824) != 0) {
    (*DAT_021a8528)();
  }
  *(undefined4 *)(iVar2 + 0x824) = 0;
  return;
}

