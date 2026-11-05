
void FUN_0214fe10(undefined2 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined2 *)0x0) {
    switch(*param_1) {
    default:
      if (DAT_0216d11c != (code *)0x0) {
        (*DAT_0216d11c)(1,0);
      }
      break;
    case 1:
      if (param_1[1] == 0) {
        if (DAT_0216d118 == 4) {
          DAT_0216d118 = 3;
          if (DAT_0216d11c != (code *)0x0) {
            (*DAT_0216d11c)(6);
            return;
          }
        }
        else if (DAT_0216d118 == 6) {
          iVar1 = func_0x02199294(DAT_0216d110,DAT_0216d114,DAT_0216d104);
          if ((iVar1 != 3) && (DAT_0216d118 = 3, DAT_0216d11c != (code *)0x0)) {
            (*DAT_0216d11c)(2,0);
            return;
          }
        }
        else if (((DAT_0216d118 == 8) &&
                 (iVar1 = func_0x02198f54(DAT_0216d120,DAT_0216d124,DAT_0216d10c), iVar1 != 3)) &&
                (DAT_0216d118 = 3, DAT_0216d11c != (code *)0x0)) {
          (*DAT_0216d11c)(2,0);
          return;
        }
      }
      else {
        DAT_0216d118 = 1;
        if (DAT_0216d11c != (code *)0x0) {
          (*DAT_0216d11c)(2);
          return;
        }
      }
      break;
    case 2:
      if (param_1[1] == 0) {
        if (DAT_0216d118 == 2) {
          func_0x021994f8();
          DAT_0216d118 = 0;
          if (DAT_0216d11c != (code *)0x0) {
            (*DAT_0216d11c)(0x14);
            return;
          }
        }
      }
      else {
        DAT_0216d118 = 3;
        if (DAT_0216d11c != (code *)0x0) {
          (*DAT_0216d11c)(2);
          return;
        }
      }
      break;
    case 3:
      if (param_1[1] == 0) {
        if ((DAT_0216d118 == 6) && (DAT_0216d118 = 5, DAT_0216d11c != (code *)0x0)) {
          (*DAT_0216d11c)(8);
          return;
        }
      }
      else {
        DAT_0216d118 = 3;
        if (DAT_0216d11c != (code *)0x0) {
          (*DAT_0216d11c)(9);
          return;
        }
      }
      break;
    case 4:
      if (param_1[1] == 0) {
        if (DAT_0216d118 == 4) {
          DAT_0216d118 = 3;
          if (DAT_0216d11c != (code *)0x0) {
            (*DAT_0216d11c)(10);
            return;
          }
        }
        else if (DAT_0216d118 == 6) {
          iVar1 = func_0x02199294(DAT_0216d110,DAT_0216d114,DAT_0216d104);
          if ((iVar1 != 3) && (DAT_0216d118 = 3, DAT_0216d11c != (code *)0x0)) {
            (*DAT_0216d11c)(2,0);
            return;
          }
        }
        else if (DAT_0216d118 == 2) {
          iVar1 = func_0x021992b4();
          if ((iVar1 != 3) && (DAT_0216d118 = 3, DAT_0216d11c != (code *)0x0)) {
            (*DAT_0216d11c)(2,0);
            return;
          }
        }
        else if (((DAT_0216d118 == 8) &&
                 (iVar1 = func_0x02198f54(DAT_0216d120,DAT_0216d124,DAT_0216d10c), iVar1 != 3)) &&
                (DAT_0216d118 = 3, DAT_0216d11c != (code *)0x0)) {
          (*DAT_0216d11c)(2,0);
          return;
        }
      }
      else {
        DAT_0216d118 = 3;
        if (DAT_0216d11c != (code *)0x0) {
          (*DAT_0216d11c)(0xb);
          return;
        }
      }
      break;
    case 5:
      if (param_1[1] == 0) {
        if ((DAT_0216d118 == 8) && (DAT_0216d118 = 7, DAT_0216d11c != (code *)0x0)) {
          (*DAT_0216d11c)(0xc);
          return;
        }
      }
      else {
        DAT_0216d118 = 3;
        if (DAT_0216d11c != (code *)0x0) {
          (*DAT_0216d11c)(0xd);
          return;
        }
      }
      break;
    case 6:
      if (param_1[1] == 0) {
        if (DAT_0216d118 == 4) {
          DAT_0216d118 = 3;
          if (DAT_0216d11c != (code *)0x0) {
            (*DAT_0216d11c)(0xe);
            return;
          }
        }
        else if (DAT_0216d118 == 6) {
          iVar1 = func_0x02199294(DAT_0216d110,DAT_0216d114,DAT_0216d104);
          if ((iVar1 != 3) && (DAT_0216d118 = 3, DAT_0216d11c != (code *)0x0)) {
            (*DAT_0216d11c)(2,0);
            return;
          }
        }
        else if (DAT_0216d118 == 2) {
          iVar1 = func_0x021992b4();
          if ((iVar1 != 3) && (DAT_0216d118 = 3, DAT_0216d11c != (code *)0x0)) {
            (*DAT_0216d11c)(2,0);
            return;
          }
        }
        else {
          if (DAT_0216d118 != 8) {
            DAT_0216d118 = 3;
            return;
          }
          iVar1 = func_0x02198f54(DAT_0216d120,DAT_0216d124,DAT_0216d10c);
          if ((iVar1 != 3) && (DAT_0216d118 = 3, DAT_0216d11c != (code *)0x0)) {
            (*DAT_0216d11c)(2,0);
            return;
          }
        }
      }
      else {
        DAT_0216d118 = 3;
        if (DAT_0216d11c != (code *)0x0) {
          (*DAT_0216d11c)(0xf);
          return;
        }
      }
      break;
    case 7:
      if ((DAT_0216d118 == 5) && (DAT_0216d11c != (code *)0x0)) {
        (*DAT_0216d11c)(5);
        return;
      }
    }
  }
  return;
}

