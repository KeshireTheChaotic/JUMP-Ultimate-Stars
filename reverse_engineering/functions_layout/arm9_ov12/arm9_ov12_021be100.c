
void FUN_021be100(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_5c [76];
  
  piVar3 = *(int **)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  FUN_02064744(auStack_5c);
  iVar4 = *piVar3;
  uVar1 = FUN_02063f94(iVar2 + 0x10,*(undefined4 *)(iVar2 + 0x14));
  iVar2 = FUN_020645a0(auStack_5c,uVar1,iVar4,iVar4 + piVar3[1],0xffffffff);
  if (iVar2 != 0) {
    iVar2 = FUN_02064430(auStack_5c,piVar3[2],piVar3[1]);
    if (piVar3[1] == iVar2) {
      piVar3[3] = 2;
    }
    FUN_020644ec(auStack_5c);
  }
  if (piVar3[3] != 2) {
    FUN_02055684();
  }
  return;
}

