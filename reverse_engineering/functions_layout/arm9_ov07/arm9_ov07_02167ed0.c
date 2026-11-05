
void FUN_02167ed0(char *param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  if ((int)param_2 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffff;
    if ((int)param_2 < 0x10000) {
      uVar2 = param_2 & 0xffff;
    }
  }
  iVar3 = param_3 * 0xc;
  *(uint *)(param_1 + iVar3 + 0xc) = *(int *)(param_1 + iVar3 + 0xc) + uVar2;
  *(short *)(param_1 + iVar3 + 10) = *(short *)(param_1 + iVar3 + 10) + 1;
  uVar1 = FUN_0200d338(*(undefined4 *)(param_1 + iVar3 + 0xc),*(undefined2 *)(param_1 + iVar3 + 10))
  ;
  *(undefined2 *)(param_1 + iVar3 + 4) = uVar1;
  uVar1 = (undefined2)uVar2;
  if (*(short *)(param_1 + iVar3 + 10) == 1) {
    *(undefined2 *)(param_1 + iVar3 + 6) = uVar1;
    *(undefined2 *)(param_1 + iVar3 + 8) = uVar1;
  }
  else {
    if (uVar2 < *(ushort *)(param_1 + iVar3 + 6)) {
      *(undefined2 *)(param_1 + iVar3 + 6) = uVar1;
    }
    if (*(ushort *)(param_1 + iVar3 + 8) < uVar2) {
      *(undefined2 *)(param_1 + iVar3 + 8) = uVar1;
    }
  }
  param_1[1] = param_1[1] | (byte)(1 << (param_3 & 0xff));
  if (param_1[1] != '\x0f') {
    FUN_02167d6c(param_1);
    return;
  }
  *param_1 = *param_1 + -1;
  if (*param_1 < '\x01') {
    return;
  }
  FUN_02167e28(param_1);
  return;
}

