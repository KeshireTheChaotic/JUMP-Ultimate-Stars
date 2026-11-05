
void FUN_020459ec(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar1 = *(undefined4 **)(param_1[1] + 4);
  while (puVar5 = (undefined4 *)puVar1[1], puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0xffffffff);
    puVar1 = puVar5;
  }
  iVar2 = FUN_0200d338(param_2,param_1[6]);
  param_1[2] = iVar2;
  param_1[3] = iVar2;
  FUN_02002488(param_1[4],0,param_1[2] << 2);
  *(ushort *)(param_1[4] + 2) = *(ushort *)(param_1[4] + 2) | 0x8000;
  uVar3 = 0;
  *(undefined2 *)param_1[4] = 0x7fff;
  *(ushort *)(param_1[4] + 2) = *(ushort *)(param_1[4] + 2) & 0x8000 | (ushort)param_1[2] & 0x7fff;
  if (param_1[2] != 0) {
    iVar2 = 0;
    do {
      uVar3 = uVar3 + 1;
      iVar4 = param_1[4] + iVar2;
      iVar2 = iVar2 + 4;
      *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) | 0x8000;
    } while (uVar3 < (uint)param_1[2]);
  }
  param_1[5] = param_1[4];
  *(int *)(*param_1 + 8) = param_1[1];
  *(undefined4 *)(*param_1 + 4) = 0;
  *(undefined4 *)(param_1[1] + 8) = 0;
  *(int *)(param_1[1] + 4) = *param_1;
  return;
}

