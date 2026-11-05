
/* JUS-GAME WiFiGame::WiFiGame_MessObj_MessageFunc [source-string] __FILE__="WiFiGame.cpp"
   __FUNCTION__="WiFiGame_MessObj_MessageFunc" lines=[266, 293] passed to 8 source-location call(s);
   header inlines: ALObjectImp.h:PostMessage */

void WiFiGame::WiFiGame_MessObj_MessageFunc(int param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  ushort *puVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 == 0x70000004) {
    puVar4 = (ushort *)(**(code **)(*param_2 + 4))();
    uVar1 = (**(code **)*param_2)();
    iVar3 = DAT_0214ccf8;
    switch(uVar1) {
    case 0:
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 1:
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      uVar6 = (**(code **)*param_2)();
      FUN_020882f4(uVar6 >> 8);
      (**(code **)*param_2)();
      break;
    case 2:
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      FUN_02088348();
      (**(code **)*param_2)();
      break;
    case 3:
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      FUN_02088248();
      break;
    case 4:
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 5:
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 6:
      DAT_020afe9c = (uint)*puVar4;
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 7:
      DAT_020afea0 = (uint)*puVar4;
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 8:
      DAT_020afeac = (uint)*puVar4;
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 9:
      DAT_020afebb = (byte)*puVar4 != 0;
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 10:
      DAT_020afebc = (byte)*puVar4 != 0;
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 0xb:
      DAT_020afebd = (byte)*puVar4 != 0;
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 0xc:
      (&DAT_020afebe)[(byte)*puVar4] = *(byte *)((int)puVar4 + 1);
      if (*(int *)(iVar3 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 0xd:
      DAT_020afec3 = (byte)*puVar4;
      DAT_020afe90 = DAT_020afe94 + (char)DAT_020afec3;
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 0xe:
      (&DAT_020afec4)[(byte)*puVar4] = *(byte *)((int)puVar4 + 1);
      if (*(int *)(iVar3 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 0xf:
      break;
    case 0x10:
      break;
    case 0x11:
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar6 = (**(code **)*param_2)();
        uVar8 = *(undefined4 *)(param_1 + 4);
        uVar9 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c40) + 4);
        iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021a71b4,s_PostMessage_021a71a8,0x10a);
        uVar7 = 0;
        if (iVar3 != 0) {
          uVar7 = WiFiGame(iVar3,0x70000004,uVar8,0x11,uVar6 >> 8,0);
        }
        FUN_02028644(uVar9,uVar7,0);
      }
      (**(code **)*param_2)();
      break;
    case 0x12:
      FUN_02030f24(*(undefined4 *)(DAT_020a0da8 + 4),*(undefined4 *)puVar4);
      *(undefined4 *)(DAT_0214ccf8 + 0x1c44) = *(undefined4 *)puVar4;
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      (**(code **)*param_2)();
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      break;
    case 0x16:
      break;
    case 0x17:
      break;
    case 0x18:
      break;
    case 0x19:
      break;
    case 0x1a:
      break;
    case 0x1b:
      uVar6 = (**(code **)*param_2)();
      FUN_02070cb8(uVar6 >> 8,puVar4);
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar6 = (**(code **)*param_2)();
        uVar8 = *(undefined4 *)(param_1 + 4);
        uVar9 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c40) + 4);
        iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021a71b4,s_PostMessage_021a71a8,0x10a);
        uVar7 = 0;
        if (iVar3 != 0) {
          uVar7 = WiFiGame(iVar3,0x70000004,uVar8,0x1b,uVar6 >> 8,0);
        }
        FUN_02028644(uVar9,uVar7,0);
      }
      (**(code **)*param_2)();
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
      break;
    case 0x21:
      break;
    case 0x22:
      break;
    case 0x23:
      uVar6 = (**(code **)*param_2)();
      FUN_02070cf0(uVar6 >> 8,puVar4);
      if ((*(char *)(DAT_0214ccf8 + 0x5c) == '\0') && (iVar3 = FUN_0219a5e8(), iVar3 != 0)) {
        uVar6 = (**(code **)*param_2)();
        uVar7 = FUN_02070cdc(uVar6 >> 8);
        FUN_0207269c(uVar7,0);
      }
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar6 = (**(code **)*param_2)();
        uVar8 = *(undefined4 *)(param_1 + 4);
        uVar9 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c40) + 4);
        iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021a71b4,s_PostMessage_021a71a8,0x10a);
        uVar7 = 0;
        if (iVar3 != 0) {
          uVar7 = WiFiGame(iVar3,0x70000004,uVar8,0x23,uVar6 >> 8,0);
        }
        FUN_02028644(uVar9,uVar7,0);
      }
      (**(code **)*param_2)();
      break;
    case 0x24:
      FUN_0219b48c(2);
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar6 = (**(code **)*param_2)();
        uVar8 = *(undefined4 *)(param_1 + 4);
        uVar9 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c40) + 4);
        iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021a71b4,s_PostMessage_021a71a8,0x10a);
        uVar7 = 0;
        if (iVar3 != 0) {
          uVar7 = WiFiGame(iVar3,0x70000004,uVar8,0x24,uVar6 >> 8,0);
        }
        FUN_02028644(uVar9,uVar7,0);
      }
      FUN_0219b75c();
      (**(code **)*param_2)();
      break;
    case 0x25:
      FUN_0219b48c(0);
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar6 = (**(code **)*param_2)();
        uVar8 = *(undefined4 *)(param_1 + 4);
        uVar9 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c40) + 4);
        iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021a71b4,s_PostMessage_021a71a8,0x10a);
        uVar7 = 0;
        if (iVar3 != 0) {
          uVar7 = WiFiGame(iVar3,0x70000004,uVar8,0x25,uVar6 >> 8,0);
        }
        FUN_02028644(uVar9,uVar7,0);
      }
      (**(code **)*param_2)();
      if (DAT_0214ccf8 != 0) {
        cVar2 = FUN_0219b620();
        WiFiGame_Static_SendCOMM(0x103,0,0,(int)cVar2,0xff);
      }
      FUN_0219b86c();
      FUN_0219de80();
      break;
    case 0x26:
      break;
    case 0x27:
      if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
        uVar1 = (**(code **)*param_2)();
        uVar6 = (**(code **)*param_2)();
        ALObjectImp::PostMessage
                  (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),0x70000004,uVar1,uVar6 >> 8,0);
      }
      FUN_0208837c();
      (**(code **)*param_2)();
    }
  }
  else {
    iVar3 = (**(code **)(*param_2 + 8))();
    if (iVar3 == 0x7ff00000) {
      psVar5 = (short *)(**(code **)(*param_2 + 4))();
      uVar6 = (**(code **)*param_2)();
      switch(uVar6 & 0xfff) {
      case 0x101:
        FUN_0219a41c();
        (**(code **)*param_2)();
        break;
      case 0x102:
        FUN_0219a438();
        (**(code **)*param_2)();
        break;
      case 0x103:
        uVar6 = (**(code **)*param_2)();
        FUN_0219b7b4(uVar6 >> 0xc);
        (**(code **)*param_2)();
        break;
      case 0x104:
        iVar3 = FUN_0219b634();
        if (iVar3 == 0) {
          FUN_0219d858(DAT_0214ccf8 + 0x88,0x50);
        }
        break;
      case 0x105:
        FUN_0219dcb8();
        break;
      case 0x106:
        uVar6 = (**(code **)*param_2)();
        FUN_0219de40(uVar6 >> 0xc,*psVar5 != 0);
      }
    }
    else {
      iVar3 = (**(code **)(*param_2 + 8))();
      if (iVar3 == 0x70000005) {
        if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
          puVar4 = (ushort *)(**(code **)*param_2)();
          uVar6 = (**(code **)(*param_2 + 4))();
          if (uVar6 < 3) {
            uVar7 = (**(code **)(*param_2 + 8))();
            ALObjectImp::PostMessage
                      (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),uVar7,*puVar4 & 0x7fff,0,0);
          }
          else {
            iVar3 = (**(code **)(*param_2 + 4))();
            uVar7 = thunk_FUN_0201a228(iVar3 + -2,s_WiFiGame_cpp_021a72dc,
                                       s_WiFiGame_MessObj_MessageFunc_021a7250,0x125);
            iVar3 = (**(code **)(*param_2 + 4))();
            MIi_CpuCopy16(puVar4 + 1,uVar7,iVar3 + -2);
            uVar8 = (**(code **)(*param_2 + 8))();
            ALObjectImp::PostMessage
                      (param_1,*(undefined4 *)(DAT_0214ccf8 + 0x1c40),uVar8,*puVar4 & 0x7fff,uVar7,4
                      );
          }
          (**(code **)(*param_2 + 4))();
        }
      }
      else {
        iVar3 = (**(code **)(*param_2 + 8))();
        if (iVar3 == 0x70000006) {
          iVar3 = FUN_0219b088();
          if (iVar3 == 0) {
            FUN_0219afb0();
            if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
              uVar9 = *(undefined4 *)(param_1 + 4);
              uVar8 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c40) + 4);
              iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021a71b4,s_PostMessage_021a71a8,0x10a)
              ;
              uVar7 = 0;
              if (iVar3 != 0) {
                uVar7 = WiFiGame(iVar3,0x70000006,uVar9,0,0,0);
              }
              FUN_02028644(uVar8,uVar7,0);
            }
            FUN_02088260();
          }
        }
        else {
          iVar3 = (**(code **)(*param_2 + 8))();
          if ((iVar3 == 0x70000007) && (*(int *)(DAT_0214ccf8 + 0x1c40) != 0)) {
            uVar9 = *(undefined4 *)(param_1 + 4);
            uVar8 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c40) + 4);
            iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021a71b4,s_PostMessage_021a71a8,0x10a);
            uVar7 = 0;
            if (iVar3 != 0) {
              uVar7 = WiFiGame(iVar3,0x70000007,uVar9,0,0,0);
            }
            FUN_02028644(uVar8,uVar7,0);
          }
        }
      }
    }
  }
  return;
}

