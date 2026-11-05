
void FUN_02086b04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  thunk_FUN_0208c51c();
  func_0x021bac28(piVar2[2],0x49,0,0,0,0,0,0,param_4);
  do {
    iVar1 = func_0x021bad2c(piVar2[2]);
    if (iVar1 != 0) {
LAB_02086b64:
      if ((*(char *)((int)piVar2 + 0x25) == '\0') && (*(char *)((int)piVar2 + 0x22) == '\0')) {
        iVar1 = func_0x021bacfc(piVar2[2]);
        if (iVar1 == 0) {
          FUN_02086998(piVar2,0);
        }
        else {
          *(undefined1 *)(piVar2 + 8) = 1;
          iVar1 = FUN_020876f8();
          if (iVar1 != 0) {
            *(undefined1 *)((int)piVar2 + 0x21) = 1;
            FUN_02028384(*(undefined4 *)(*piVar2 + 4),0x2086acd);
            FUN_02028384(*(undefined4 *)(param_1 + 4),0x2086a11);
            return;
          }
          FUN_020871d0();
          *(undefined1 *)((int)piVar2 + 0x21) = 1;
        }
      }
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x2086a11);
      return;
    }
    iVar1 = func_0x021bacec(piVar2[2]);
    if ((iVar1 != 0) && (iVar1 = func_0x021bacfc(piVar2[2]), iVar1 != 0)) {
      *(undefined1 *)((int)piVar2 + 0x25) = 0;
    }
    if (*(char *)((int)piVar2 + 0x25) != '\0') {
      func_0x021bace0(piVar2[2]);
      goto LAB_02086b64;
    }
    FUN_02026fb8(param_1);
  } while( true );
}

