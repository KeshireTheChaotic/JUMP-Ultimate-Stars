
void FUN_02038058(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(ushort *)((int)param_1 + 10) < *(ushort *)((int)param_2 + 10)) {
    uVar3 = *param_1;
    iVar2 = FUN_0201a9ec(uVar3);
    if (iVar2 == 0) {
      FUN_0201a958(uVar3,1);
    }
    uVar3 = jus_AllocDebug(param_1[1] * (uint)*(ushort *)((int)param_2 + 10));
    *param_1 = uVar3;
    *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  }
  uVar1 = *(ushort *)(param_2 + 2);
  *(ushort *)(param_1 + 2) = uVar1;
  FUN_02051890(*param_2,*param_1,(uint)uVar1 * param_1[1]);
  return;
}

