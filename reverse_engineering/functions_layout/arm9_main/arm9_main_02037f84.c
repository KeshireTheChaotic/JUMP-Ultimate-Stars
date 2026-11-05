
int FUN_02037f84(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)((int)param_1 + 10) == (short)param_1[2]) {
    *(short *)((int)param_1 + 10) = *(short *)((int)param_1 + 10) << 1;
    iVar2 = jus_AllocDebug(param_1[1] * (uint)*(ushort *)((int)param_1 + 10));
    FUN_02051890(*param_1,iVar2,(uint)*(ushort *)(param_1 + 2) * param_1[1]);
    iVar4 = *param_1;
    iVar3 = FUN_0201a9ec(iVar4);
    if (iVar3 == 0) {
      FUN_0201a958(iVar4,1);
    }
    *param_1 = iVar2;
  }
  uVar1 = *(ushort *)(param_1 + 2);
  *(ushort *)(param_1 + 2) = uVar1 + 1;
  return (uint)uVar1 * param_1[1] + *param_1;
}

