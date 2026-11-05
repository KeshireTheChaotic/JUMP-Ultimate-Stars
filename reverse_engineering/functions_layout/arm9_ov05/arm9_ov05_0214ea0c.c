
undefined4
FUN_0214ea0c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_3) {
  case 0:
    switch(param_4) {
    case 0:
      break;
    case 1:
      goto LAB_0214ea5c;
    case 2:
      FUN_02154efc(*(undefined4 *)(param_2 + 0x1c));
      uVar1 = 1;
      break;
    case 3:
      FUN_0214f24c(param_2,1);
      break;
    case 4:
LAB_0214ea5c:
      FUN_02159108(*(undefined4 *)(param_2 + 0x18));
      (*DAT_020a0e18)();
      FUN_02154f78(*(undefined4 *)(param_2 + 0x1c),1);
      FUN_02028384(*(undefined4 *)(*(int *)(param_2 + 0x30) + 4),FUN_0214f130);
    }
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    FUN_02155064(*(undefined4 *)(param_2 + 0x1c),0,param_5,0,param_4);
    break;
  case 4:
    FUN_02155064(*(undefined4 *)(param_2 + 0x1c),0,param_5,1,param_4);
    break;
  case 5:
    FUN_02155064(*(undefined4 *)(param_2 + 0x1c),param_5,0,0,param_4);
  }
  return uVar1;
}

