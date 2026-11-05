
void FUN_02150b74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined4 uStack_10;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_10 = param_4;
  iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + 0x38) + 4) + 0x68) + 0x68))();
  if (iVar1 != 0) {
    FUN_02023894(*(undefined4 *)(*(int *)(iVar4 + 0x38) + 4),0x710001,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + 0x38) + 4) + 0x68) + 0x6c))();
    piVar2 = *(int **)(*(int *)(iVar4 + 0x44) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    piVar2 = *(int **)(*(int *)(iVar4 + 0x48) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    FUN_02150d54(auStack_18,*(undefined4 *)(iVar4 + 0x44),s_Scale_02160f7c);
    uVar3 = ALControllerImp::Create(auStack_18,0x494c,&DAT_02093c98,4,0,1);
    FUN_02020f38(*(undefined4 *)(iVar4 + 0x44),uVar3);
    FUN_02150d54(auStack_20,*(undefined4 *)(iVar4 + 0x48),s_Scale_02160f7c);
    uVar3 = ALControllerImp::Create(auStack_20,0x494c,&DAT_02093c98,4,0,1);
    FUN_02020f38(*(undefined4 *)(iVar4 + 0x48),uVar3);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02150da4);
  }
  return;
}

