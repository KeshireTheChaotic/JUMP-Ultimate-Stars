
void FUN_0216275c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  int local_2c;
  undefined *local_28;
  
  iVar2 = 0;
  local_2c = 0;
  puVar3 = &DAT_0216ad8c + param_1 * 5;
  puVar4 = &DAT_0216adac;
  local_28 = &DAT_0216ad9c + param_1 * 5;
  do {
    uVar1 = FUN_02165d64(*(undefined4 *)(DAT_0216e7fc + iVar2),0);
    FUN_02166014(1,*puVar3,uVar1);
    FUN_02165b80(*(undefined4 *)(DAT_0216e7fc + iVar2),0xffffffff,0);
    FUN_02165bc4(*(undefined4 *)(DAT_0216e7fc + iVar2),0xffffffff,*puVar4,puVar4[1]);
    FUN_02165c80(*(undefined4 *)(DAT_0216e7fc + iVar2),0xffffffff,0,*local_28);
    iVar2 = iVar2 + 8;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 4;
    local_28 = local_28 + 2;
    local_2c = local_2c + 2;
  } while (local_2c < 5);
  FUN_0216244c(param_1);
  return;
}

