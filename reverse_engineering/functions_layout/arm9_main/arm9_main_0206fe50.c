
/* JUS-SCENE jus_Scene35_Exit [scene-map] scene table 0209e32c row 35 exit; slot-1 overlay 7 */

void jus_Scene35_Exit(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  switch(param_2) {
  case 0:
    FUN_0206e574(3,0,param_3,param_4,param_4);
    break;
  case 1:
    FUN_0206e524(1,4,8,0x23,10);
    FUN_0206e524(0,8,4,4,4);
    break;
  case 2:
    goto code_r0x0206fef0;
  case 3:
    goto code_r0x0206fef0;
  case 4:
    break;
  case 5:
    *(undefined4 *)(iRam02070038 + 0x18c) = 0x2b;
    break;
  case 6:
    FUN_0206e524(1,4,0x26,0x23,9);
    FUN_0206e524(0,0x26,4,0xffffffff,0);
    break;
  case 7:
    FUN_0206e524(1,4,0x27,0x23,8);
    FUN_0206e524(0,0x27,4,0xffffffff,0);
    break;
  case 8:
    FUN_0206e524(1,0x28,0x23,0xffffffff,0);
    break;
  case 9:
    goto code_r0x0206fef0;
  case 10:
    FUN_0206e524(1,4,0x23,0x23,0xb);
    break;
  case 0xb:
    FUN_0206e524(1,8,0x23,0x23,3);
    break;
  case 0xc:
    break;
  case 0xd:
    FUN_0206e524(1,0x29,0x23,0x23,0xb);
    break;
  case 0xe:
    goto code_r0x0206fef0;
  case 0xf:
code_r0x0206fef0:
    iVar1 = FUN_02087770();
    if (iVar1 == 0) {
      FUN_0207003c(0);
    }
    else if (iVar1 == 1) {
      FUN_0207003c(1);
    }
    else if (iVar1 == 2) {
      FUN_0207003c(2);
    }
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

