
undefined4 FUN_021663ec(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  puVar1 = (undefined4 *)FUN_0208369c(param_3);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = *(uint *)(puVar1[2] + 0x2c);
    if (((uVar2 & 1) == 0) && ((uVar2 & 8) == 0)) {
      iVar3 = *(int *)(*(int *)(puVar1[2] + 0x10) + 0x5c);
      uVar2 = *(int *)(iVar3 + 0xc) - param_1;
      if ((int)uVar2 < 0) {
        uVar2 = -uVar2;
      }
      uVar4 = *(int *)(iVar3 + 0x10) - param_2;
      if (uVar2 <= param_4) {
        if ((int)uVar4 < 0) {
          uVar4 = -uVar4;
        }
        if (uVar4 <= param_4) {
          return 1;
        }
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

