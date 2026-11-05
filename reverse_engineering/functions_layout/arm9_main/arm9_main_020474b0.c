
void FUN_020474b0(int param_1,short param_2,short param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
    *(short *)(param_1 + 0x88) = param_2;
    *(short *)(param_1 + 0x8a) = param_3;
    *(short *)(param_1 + 0x8c) = param_2 + 1;
    *(short *)(param_1 + 0x8e) = param_3 + 1;
    *(undefined1 *)(param_1 + 0x90) = 1;
    return;
  }
  sVar2 = *(short *)(param_1 + 0x88);
  if ((int)param_2 <= (int)*(short *)(param_1 + 0x88)) {
    sVar2 = param_2;
  }
  *(short *)(param_1 + 0x88) = sVar2;
  sVar2 = *(short *)(param_1 + 0x8a);
  if ((int)param_3 <= (int)*(short *)(param_1 + 0x8a)) {
    sVar2 = param_3;
  }
  *(short *)(param_1 + 0x8a) = sVar2;
  iVar1 = (param_2 + 1) * 0x10000 >> 0x10;
  iVar3 = (int)*(short *)(param_1 + 0x8c);
  if (*(short *)(param_1 + 0x8c) <= iVar1) {
    iVar3 = iVar1;
  }
  *(short *)(param_1 + 0x8c) = (short)iVar3;
  iVar1 = (param_3 + 1) * 0x10000 >> 0x10;
  iVar3 = (int)*(short *)(param_1 + 0x8e);
  if (*(short *)(param_1 + 0x8e) <= iVar1) {
    iVar3 = iVar1;
  }
  *(short *)(param_1 + 0x8e) = (short)iVar3;
  return;
}

