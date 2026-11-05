
void FUN_02166284(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_28 = param_4;
  for (iVar3 = 0; iVar3 < DAT_020afe90; iVar3 = iVar3 + 1) {
    if (DAT_020afebd == '\0') {
      if ((&DAT_020afee6)[iVar3] == '\0') {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
    }
    else {
      bVar4 = (&DAT_020afeea)[iVar3] == '\0';
    }
    uVar1 = *(undefined4 *)(iVar2 + iVar3 * 4 + 0x60);
    if (bVar4) {
      FUN_0216638c(uVar1,0x19);
    }
    else {
      FUN_0216638c(uVar1,0x1a);
    }
  }
  FUN_0214f714(&local_30,*(undefined4 *)(iVar2 + 0x4c),&DAT_0216d898);
  local_34 = 0x1000;
  FUN_02014080(local_30,local_2c,&local_34,4,1);
  uVar1 = FUN_0215e28c();
  FUN_02020f38(*(undefined4 *)(iVar2 + 0x4c),uVar1);
  *(undefined2 *)(iVar2 + 0x96) = 0;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021663b0);
  return;
}

