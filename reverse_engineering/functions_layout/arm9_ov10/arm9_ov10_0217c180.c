
int FUN_0217c180(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    iVar1 = FUN_02178448();
    uVar2 = FUN_0218c40c(*(undefined4 *)(param_1 + 4),0,0);
    FUN_0217fc6c(*(undefined4 *)(iVar1 + 0xe4),uVar2,*(undefined2 *)(param_1 + 2),
                 *(undefined4 *)(param_1 + 8));
    iVar1 = FUN_021790e4();
    if (iVar1 != 0) {
      return 2;
    }
  }
  iVar1 = 0;
  while( true ) {
    iVar3 = FUN_02178448();
    uVar2 = FUN_0218a858(**(undefined4 **)(iVar3 + 4));
    iVar3 = FUN_0218c8e4(uVar2,*(undefined4 *)(param_1 + 8),*param_1,&DAT_02178775,0x21784b9,param_1
                        );
    if (iVar3 == 0) {
      return 0;
    }
    if (iVar3 != 3) break;
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
      return 3;
    }
  }
  return iVar3;
}

