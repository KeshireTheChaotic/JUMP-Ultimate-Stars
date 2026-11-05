
int FUN_021660fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  lVar5 = FUN_02054b44();
  lVar5 = lVar5 - *(longlong *)(iVar4 + 0x80);
  uVar3 = (uint)lVar5;
  iVar2 = (int)((ulonglong)lVar5 >> 0x20);
  iVar1 = 0xd8fac - uVar3;
  if ((uint)(uVar3 < 0xd8fad) <= (uint)-iVar2) {
    FUN_02169034(*(undefined4 *)(iVar4 + 0x70),iVar2,-(uint)(uVar3 >= 0xd8fad) - iVar2,uVar3,param_4
                );
    func_0x021b65cc();
    iVar1 = FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166141);
  }
  return iVar1;
}

