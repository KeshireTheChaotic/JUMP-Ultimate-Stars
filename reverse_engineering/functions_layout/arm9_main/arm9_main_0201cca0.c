
void FUN_0201cca0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  
  *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) + 1;
  uVar3 = (uint)*(ushort *)(param_2 + 6);
  iVar2 = *(int *)(param_1 + ((int)uVar3 >> 8) * 4 + 0xc);
  if (iVar2 == 0) {
    local_10 = param_4;
    FUN_02011990(&local_10);
    uVar3 = (int)(local_10 + 0x1000 + ((uint)(local_10 + 0x1000 >> 0xb) >> 0x14)) >> 0xc;
    while( true ) {
      if (0xff < uVar3) {
        return;
      }
      iVar1 = param_1 + uVar3 * 4;
      iVar2 = *(int *)(iVar1 + 0xc);
      if (iVar2 != 0) break;
      uVar3 = uVar3 + 1;
    }
    *(int *)(param_2 + 0xc) = iVar2;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 8);
    *(int *)(*(int *)(param_2 + 0xc) + 8) = param_2;
    *(int *)(*(int *)(param_2 + 8) + 0xc) = param_2;
    *(int *)(param_1 + ((int)(uint)*(ushort *)(param_2 + 6) >> 8) * 4 + 0xc) = param_2;
    return;
  }
  if (uVar3 <= *(ushort *)(iVar2 + 6)) {
    *(int *)(param_2 + 0xc) = iVar2;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 8);
    *(int *)(*(int *)(iVar2 + 8) + 0xc) = param_2;
    *(int *)(iVar2 + 8) = param_2;
    *(int *)(param_1 + ((int)(uint)*(ushort *)(param_2 + 6) >> 8) * 4 + 0xc) = param_2;
    return;
  }
  for (; *(ushort *)(iVar2 + 6) < uVar3; iVar2 = *(int *)(iVar2 + 0xc)) {
  }
  *(int *)(param_2 + 0xc) = iVar2;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 8);
  *(int *)(*(int *)(param_2 + 0xc) + 8) = param_2;
  *(int *)(*(int *)(param_2 + 8) + 0xc) = param_2;
  return;
}

