
/* JUS-SCENE jus_Scene21_Exit [scene-map] scene table 0209e32c row 21 exit; slot-1 overlay 3 */

void jus_Scene21_Exit(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = iRam0206f650;
  uVar1 = (param_2 & 0xff0000) >> 0x10;
  if (uVar1 < 0x15) {
    if (uVar1 < 0x14) {
      if ((uVar1 < 5) && (1 < uVar1)) {
        if (uVar1 == 2) {
          FUN_0206e524(1,0x16,4,0x15,0);
        }
        else if (uVar1 == 3) {
          FUN_0206e524(1,4,6,0x15,1);
          FUN_0206e524(0,6,7,4,0);
          FUN_0206e524(0,7,0xc,6,2);
          FUN_0206e524(0,0xc,0xd,0x15,3);
          FUN_0206e524(0,0xd,0x1a,0xffffffff,0);
          FUN_0206e524(0,0x1a,4,0x15,0x11);
        }
        else if (uVar1 == 4) {
          FUN_0206e524(1,4,6,0x15,1);
          FUN_0206e524(0,6,7,4,0);
          FUN_0206e524(0,7,0xc,6,4);
          FUN_0206e524(0,0xc,0x15,0x15,4);
        }
      }
    }
    else {
      *(undefined4 *)(iRam0206f650 + 0xc) = 0;
      *(undefined1 *)(iVar2 + 0x13) = 1;
      func_0x0206f81c();
    }
  }
  else if (uVar1 < 0x16) {
    if (uVar1 == 0x15) {
      *(undefined4 *)(iRam0206f650 + 0xc) = 0;
      *(undefined1 *)(iVar2 + 0x13) = 1;
      func_0x0206f81c();
    }
  }
  else {
    switch(uVar1) {
    case 0x16:
      *(undefined4 *)(iRam0206f650 + 0xc) = 0;
      *(undefined1 *)(iVar2 + 0x13) = 1;
      func_0x0206f81c(2);
      break;
    case 0x17:
      *(undefined4 *)(iRam0206f650 + 0xc) = 0;
      *(undefined1 *)(iVar2 + 0x13) = 1;
      func_0x0206f81c(3);
      break;
    case 0x18:
      FUN_0206e524(1,0x1c,0x15,0xffffffff,0);
      break;
    case 0x19:
      break;
    case 0x1a:
      break;
    case 0x1b:
      break;
    case 0x1c:
      break;
    case 0x1d:
      break;
    case 0x1e:
      break;
    case 0x1f:
      break;
    case 0x20:
      FUN_0206e574(3,0,param_3,param_4,param_4);
    }
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}

