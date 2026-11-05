
void FUN_021bf8f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    switch(DAT_021d51c4) {
    case 0:
    case 1:
      iVar1 = FUN_021bf880();
      if (iVar1 == 0) {
        return;
      }
      break;
    case 2:
      FUN_021bf848();
      break;
    case 3:
      FUN_021bf744(param_1,param_2,param_3);
      return;
    case 4:
      FUN_021bf720();
      break;
    case 5:
      FUN_021bf560(param_1,param_2,param_3);
      return;
    }
  } while( true );
}

