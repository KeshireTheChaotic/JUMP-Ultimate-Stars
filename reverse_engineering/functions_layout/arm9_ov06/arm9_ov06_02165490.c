
void FUN_02165490(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  for (puVar1 = (undefined4 *)FUN_0208369c(2); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    uVar2 = puVar1[2];
    FUN_02083648(uVar2);
    FUN_02165528(uVar2);
  }
  for (puVar1 = (undefined4 *)FUN_0208369c(1); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    uVar2 = puVar1[2];
    FUN_02083648(uVar2);
    FUN_02165528(uVar2);
  }
  for (puVar1 = (undefined4 *)FUN_0208369c(3); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    uVar2 = puVar1[2];
    FUN_02083648(uVar2);
    FUN_02165528(uVar2);
  }
  return;
}

