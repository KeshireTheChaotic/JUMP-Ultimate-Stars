
void FUN_02162b10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  int local_2c;
  undefined *local_28;
  
  DAT_0216e7fc = FUN_02166b8c(0x1c,4);
  local_2c = 0;
  puVar3 = &DAT_0216ad8c + param_1 * 5;
  iVar2 = 0;
  puVar4 = &DAT_0216adac;
  local_28 = &DAT_0216ad9c + param_1 * 5;
  do {
    uVar1 = FUN_02165fc4(1,*puVar3,1);
    *(undefined4 *)(DAT_0216e7fc + iVar2) = uVar1;
    FUN_02165b80(*(undefined4 *)(DAT_0216e7fc + iVar2),0xffffffff,0);
    FUN_02165bc4(*(undefined4 *)(DAT_0216e7fc + iVar2),0xffffffff,0xffffffd6,puVar4[1]);
    FUN_02165c80(*(undefined4 *)(DAT_0216e7fc + iVar2),0xffffffff,0,*local_28);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 4;
    puVar4 = puVar4 + 2;
    local_28 = local_28 + 1;
    local_2c = local_2c + 1;
  } while (local_2c < 5);
  uVar1 = FUN_02167814(0,&DAT_02162a81,0,0x78);
  *(undefined4 *)(DAT_0216e7fc + 0x14) = uVar1;
  FUN_0216244c(param_1);
  FUN_02162378(0xd);
  return;
}

