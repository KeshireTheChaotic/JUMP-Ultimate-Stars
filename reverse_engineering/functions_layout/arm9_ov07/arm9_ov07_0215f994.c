
void FUN_0215f994(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  *(int *)(param_1 + 0x50f0) = param_2;
  iVar1 = *(int *)(param_1 + 0x50f4);
  if (iVar1 == param_2) {
    switch(param_2) {
    case 0:
      goto LAB_0215f9dc;
    case 1:
      return;
    case 2:
      if (*(code **)(param_1 + 0x50f8) == (code *)0x0) {
        return;
      }
      (**(code **)(param_1 + 0x50f8))(2,0);
      return;
    case 3:
      if (*(code **)(param_1 + 0x50f8) == (code *)0x0) {
        return;
      }
      (**(code **)(param_1 + 0x50f8))(1,0);
      return;
    case 4:
      *(undefined4 *)(param_1 + 0x50ec) = 0;
      if (*(code **)(param_1 + 0x50f8) == (code *)0x0) {
        return;
      }
      (**(code **)(param_1 + 0x50f8))(3);
      return;
    case 5:
      *(undefined4 *)(param_1 + 0x50ec) = 0;
      if (*(code **)(param_1 + 0x50f8) != (code *)0x0) {
        (**(code **)(param_1 + 0x50f8))(4);
      }
      *(ushort *)(param_1 + 0x50e6) = *(ushort *)(param_1 + 0x50e6) | 1;
      if (*(code **)(param_1 + 0x50f8) != (code *)0x0) {
        (**(code **)(param_1 + 0x50f8))(10,param_3);
      }
      FUN_0215fbb8(param_1);
      return;
    default:
      return;
    }
  }
  switch(param_2) {
  case 0:
    FUN_0215f708(0);
    return;
  case 1:
    break;
  case 2:
    switch(iVar1) {
    case 0:
      FUN_0215f524(0);
      return;
    case 1:
      break;
    case 2:
      break;
    case 3:
      goto LAB_0215fb2c;
    case 4:
      goto LAB_0215fb2c;
    case 5:
LAB_0215fb2c:
      FUN_0215f674(0);
      return;
    }
    break;
  case 3:
    switch(iVar1) {
    case 0:
      goto LAB_0215fb60;
    case 1:
      break;
    case 2:
LAB_0215fb60:
      FUN_0215f5e0(0);
      return;
    case 3:
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x5100) = 1;
      if (*(int *)(param_1 + 0x5100) == 0) {
        return;
      }
      FUN_0215ee74(0);
      return;
    case 5:
      FUN_0215eba4(0);
      return;
    }
    break;
  case 4:
    goto LAB_0215fba8;
  case 5:
LAB_0215fba8:
    FUN_0215f488(0);
  }
  return;
LAB_0215f9dc:
  if (*(code **)(param_1 + 0x50f8) == (code *)0x0) {
    return;
  }
  (**(code **)(param_1 + 0x50f8))(0,0);
  return;
}

