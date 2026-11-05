
undefined4 FUN_021618b4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_3) {
  case 0:
    switch(param_4) {
    case 0:
      break;
    case 1:
      goto LAB_02161904;
    case 2:
      uVar1 = 1;
      break;
    case 3:
      break;
    case 4:
LAB_02161904:
      FUN_02159108(*(undefined4 *)(param_2 + 0x1c));
      (*DAT_020a0e18)();
      FUN_02028384(*(undefined4 *)(*(int *)(param_2 + 0x34) + 4),FUN_02161c60);
    }
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
  }
  return uVar1;
}

