
int FUN_021682a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  lVar7 = FUN_02054b44();
  lVar7 = lVar7 - *(longlong *)(iVar6 + 0x48);
  uVar5 = (uint)lVar7;
  iVar3 = (int)((ulonglong)lVar7 >> 0x20);
  iVar1 = 0xe1808 - uVar5;
  if ((uint)(uVar5 < 0xe1809) <= (uint)-iVar3) {
    piVar2 = *(int **)(*(int *)(*(int *)(iVar6 + 0x2c) + 4) + 0x68);
    pcVar4 = *(code **)(*piVar2 + 0x6c);
    (*pcVar4)(piVar2,pcVar4,-(uint)(uVar5 >= 0xe1809) - iVar3,uVar5,param_4);
    if ((int)((uint)*(byte *)(iVar6 + 0x76) << 0x1f) < 0) {
      FUN_02168304(*(undefined4 *)(iVar6 + 0x30),0x19);
    }
    else {
      FUN_02168304(*(undefined4 *)(iVar6 + 0x30),0x1a);
    }
    if (*(code **)(iVar6 + 0x3c) != (code *)0x0) {
      (**(code **)(iVar6 + 0x3c))(*(undefined4 *)(iVar6 + 0x44));
    }
    iVar1 = FUN_02028384(*(undefined4 *)(param_1 + 4),0x2168329);
  }
  return iVar1;
}

