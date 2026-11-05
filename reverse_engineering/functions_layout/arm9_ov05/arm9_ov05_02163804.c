
undefined4 FUN_02163804(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  do {
    if (4 < param_2) {
      return *(undefined4 *)(param_1 + 0xc4);
    }
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      iVar1 = FUN_02152d80(*(undefined4 *)
                            (param_1 + param_2 * 0xc +
                             *(int *)(&DAT_0216d73c + iVar2 * 4 + param_3 * 0xc) * 4 + 200));
      if (iVar1 == 0) {
        return *(undefined4 *)
                (param_1 + param_2 * 0xc + *(int *)(&DAT_0216d73c + iVar2 * 4 + param_3 * 0xc) * 4 +
                200);
      }
    }
    param_2 = param_2 + 1;
  } while( true );
}

