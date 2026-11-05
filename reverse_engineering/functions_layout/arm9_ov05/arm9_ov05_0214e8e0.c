
undefined4
FUN_0214e8e0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_3 == 0) {
    switch(param_4) {
    case 0:
      FUN_0214fe54(*(undefined4 *)(param_2 + 0x14));
      FUN_02028384(*(undefined4 *)(*(int *)(param_2 + 0x30) + 4),FUN_0214ed2c);
      break;
    case 1:
      FUN_0214eff0(param_2);
      break;
    case 2:
      FUN_02154efc(*(undefined4 *)(param_2 + 0x1c));
      break;
    case 3:
      FUN_0214f24c(param_2,0,0,param_4,param_4);
      break;
    case 4:
      FUN_0214fe54(*(undefined4 *)(param_2 + 0x14));
      FUN_02028384(*(undefined4 *)(*(int *)(param_2 + 0x30) + 4),FUN_0214eee4);
    }
    uVar3 = 1;
  }
  else if (param_3 == 1) {
    iVar1 = FUN_0214e000(*param_1);
    if (iVar1 == 0) {
      FUN_02155064(*(undefined4 *)(param_2 + 0x1c),0,0,0);
    }
    else {
      uVar2 = FUN_0214e018(*param_1,param_4);
      FUN_02155064(*(undefined4 *)(param_2 + 0x1c),uVar2,0,0);
    }
  }
  else if (param_3 == 2) {
    *(ushort **)(param_2 + 0xc) = param_5;
    *(uint *)(param_2 + 0x34) = (uint)*param_5;
    FUN_0214eff0(param_2);
    uVar3 = 1;
  }
  return uVar3;
}

