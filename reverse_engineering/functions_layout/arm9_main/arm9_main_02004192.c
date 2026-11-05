
int FUN_02004192(void)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r4;
  int *piVar4;
  int *piVar5;
  code *unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  bool bVar6;
  undefined8 uVar7;
  char *in_stack_0000000c;
  uint *in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  uint in_stack_0000002c;
  int in_stack_00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000050;
  undefined1 uStack00000054;
  int in_stack_0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  int in_stack_00000068;
  undefined1 uStack0000006c;
  int in_stack_000000a0;
  
  uVar7 = CONCAT44(in_stack_0000001c,in_stack_00000040);
  bVar6 = true;
  if ((-1 < (int)unaff_r4) && ((int)unaff_r4 < 0x80)) {
    bVar6 = false;
  }
  if (bVar6) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ushort *)(&DAT_0208d520 + unaff_r4 * 2) & 0x100;
  }
  if (uVar1 != 0) {
    do {
      bVar6 = true;
      in_stack_0000000c = in_stack_0000000c + 1;
      iVar3 = (int)*in_stack_0000000c;
      if ((-1 < iVar3) && (iVar3 < 0x80)) {
        bVar6 = false;
      }
      if (bVar6) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(ushort *)(&DAT_0208d520 + iVar3 * 2) & 0x100;
      }
    } while (uVar1 != 0);
    if (in_stack_00000038 == 0) {
      do {
        uStack00000054 = (*unaff_r5)(unaff_r6,0,0);
        iVar3 = (int)uStack00000054;
        if ((iVar3 < 0) || (0x7f < iVar3)) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(ushort *)(&DAT_0208d520 + iVar3 * 2) & 0x100;
        }
      } while (uVar1 != 0);
      (*unaff_r5)(unaff_r6,iVar3,1);
    }
    goto switchD_02004960_caseD_4;
  }
  if ((unaff_r4 != 0x25) && (in_stack_00000038 == 0)) {
    uStack00000054 = (*unaff_r5)(unaff_r6,0,0);
    if ((unaff_r4 & 0xff) == (int)uStack00000054) {
      in_stack_0000000c = in_stack_0000000c + 1;
    }
    else {
      (*unaff_r5)(unaff_r6,(int)uStack00000054,1);
      if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
      in_stack_0000000c = in_stack_0000000c + 1;
    }
    goto switchD_02004960_caseD_4;
  }
  in_stack_0000000c = (char *)FUN_02003e30(in_stack_0000000c,&uStack00000064);
  if (((char)uStack00000064 == '\0') && (uStack00000064._3_1_ != 0x25)) {
    piVar4 = (int *)*in_stack_00000010;
    in_stack_00000010 = in_stack_00000010 + 1;
  }
  else {
    piVar4 = (int *)0x0;
  }
  if (((uStack00000064._3_1_ != 0x6e) && (in_stack_00000038 == 0)) &&
     (iVar3 = (*unaff_r5)(unaff_r6,0,2), iVar3 != 0)) {
    if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
    in_stack_00000038 = 1;
  }
  if (uStack00000064._3_1_ < 0x5c) {
    if (uStack00000064._3_1_ < 0x5b) {
      if (0x47 < uStack00000064._3_1_) {
        if (uStack00000064._3_1_ != 0x58) goto switchD_020042d2_caseD_42;
        goto switchD_02004306_caseD_78;
      }
      switch(uStack00000064._3_1_) {
      case 0x41:
      case 0x45:
      case 0x46:
      case 0x47:
        goto switchD_020042d2_caseD_41;
      case 0x42:
      case 0x43:
      case 0x44:
        goto switchD_020042d2_caseD_42;
      default:
        if (uStack00000064._3_1_ != 0x25) goto switchD_020042d2_caseD_42;
        if (in_stack_00000038 == 0) {
          do {
            uStack00000054 = (*unaff_r5)(unaff_r6,0,0);
            iVar3 = (int)uStack00000054;
            if ((iVar3 < 0) || (0x7f < iVar3)) {
              uVar1 = 0;
            }
            else {
              uVar1 = *(ushort *)(&DAT_0208d520 + iVar3 * 2) & 0x100;
            }
          } while (uVar1 != 0);
          if ((iVar3 != 0x25) && ((*unaff_r5)(unaff_r6,iVar3,1), in_stack_000000a0 == 0))
          goto switchD_020042d2_caseD_42;
        }
      }
    }
    else {
LAB_020047b0:
      if (piVar4 == (int *)0x0) {
        uStack00000060 = 0;
        while (((iVar3 = in_stack_00000068 + -1, bVar6 = in_stack_00000068 != 0,
                in_stack_00000068 = iVar3, bVar6 &&
                (in_stack_0000002c = (*unaff_r5)(unaff_r6,0,0), in_stack_0000002c != 0xffffffff)) &&
               (uStack00000054 = (char)in_stack_0000002c,
               (1 << ((int)uStack00000054 & 7U) &
               (uint)(byte)(&uStack0000006c)[(int)(in_stack_0000002c & 0xff) >> 3]) != 0))) {
          uStack00000060 = uStack00000060 + 1;
        }
        uStack00000054 = (char)in_stack_0000002c;
        if (uStack00000060 == 0) {
          (*unaff_r5)(unaff_r6,(int)uStack00000054,1);
        }
        else {
LAB_02004932:
          if (-1 < in_stack_00000068) {
            (*unaff_r5)(unaff_r6,(int)uStack00000054,1);
          }
          in_stack_0000004c = in_stack_0000004c + 1;
        }
      }
      else {
        if (in_stack_000000a0 != 0) {
          in_stack_00000014 = 1;
          in_stack_0000003c = *in_stack_00000010 - 1;
        }
        uStack00000060 = 0;
        if (in_stack_00000038 == 0) {
          piVar5 = piVar4;
          while ((iVar3 = in_stack_00000068 + -1, bVar6 = in_stack_00000068 != 0,
                 in_stack_00000068 = iVar3, bVar6 &&
                 ((((in_stack_000000a0 == 0 ||
                    (in_stack_00000014 = (uint)(uStack00000060 <= in_stack_0000003c),
                    in_stack_00000014 != 0)) &&
                   (in_stack_0000002c = (*unaff_r5)(unaff_r6,0,0), in_stack_0000002c != 0xffffffff))
                  && (uStack00000054 = (char)in_stack_0000002c,
                     ((uint)(byte)(&uStack0000006c)[(int)(in_stack_0000002c & 0xff) >> 3] &
                     1 << ((int)uStack00000054 & 7U)) != 0))))) {
            if (uStack00000064._2_1_ == '\n') {
              FUN_02002334(piVar5,&uStack00000054,1);
              piVar5 = (int *)((int)piVar5 + 2);
            }
            else {
              *(char *)piVar5 = uStack00000054;
              piVar5 = (int *)((int)piVar5 + 1);
            }
            uStack00000060 = uStack00000060 + 1;
          }
          uStack00000054 = (char)in_stack_0000002c;
          if ((uStack00000060 != 0) && ((in_stack_000000a0 == 0 || (in_stack_00000014 != 0)))) {
            if (uStack00000064._2_1_ == '\n') {
              *(undefined2 *)piVar5 = 0;
            }
            else {
              *(char *)piVar5 = '\0';
            }
            in_stack_00000050 = in_stack_00000050 + 1;
            goto LAB_02004932;
          }
          (*unaff_r5)(unaff_r6,(int)uStack00000054,1);
          if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
          if (in_stack_0000003c != 0) {
            *(char *)piVar4 = '\0';
          }
        }
        else if (in_stack_0000003c != 0) {
          *(char *)piVar4 = '\0';
        }
      }
    }
    goto switchD_02004960_caseD_4;
  }
  if (0x78 < uStack00000064._3_1_) goto switchD_020042d2_caseD_42;
  switch(uStack00000064._3_1_) {
  case 99:
    if (uStack00000064._1_1_ == '\0') {
      in_stack_00000068 = 1;
    }
    if (piVar4 == (int *)0x0) {
      uStack00000060 = 0;
      while ((iVar3 = in_stack_00000068 + -1, bVar6 = in_stack_00000068 != 0,
             in_stack_00000068 = iVar3, bVar6 &&
             (in_stack_0000002c = (*unaff_r5)(unaff_r6,0,0), in_stack_0000002c != 0xffffffff))) {
        uStack00000054 = (char)in_stack_0000002c;
        uStack00000060 = uStack00000060 + 1;
      }
      uStack00000054 = (char)in_stack_0000002c;
      if (uStack00000060 == 0) goto switchD_020042d2_caseD_42;
LAB_0200470c:
      in_stack_0000004c = in_stack_0000004c + 1;
    }
    else {
      if (in_stack_000000a0 != 0) {
        in_stack_00000014 = 1;
        in_stack_0000003c = *in_stack_00000010;
      }
      uStack00000060 = 0;
      if (in_stack_00000038 == 0) {
        piVar5 = piVar4;
        while ((iVar3 = in_stack_00000068 + -1, bVar6 = in_stack_00000068 != 0,
               in_stack_00000068 = iVar3, bVar6 &&
               (((in_stack_000000a0 == 0 ||
                 (in_stack_00000014 = (uint)(uStack00000060 < in_stack_0000003c),
                 in_stack_00000014 != 0)) &&
                (in_stack_0000002c = (*unaff_r5)(unaff_r6,0,0), in_stack_0000002c != 0xffffffff)))))
        {
          uStack00000054 = (char)in_stack_0000002c;
          if (uStack00000064._2_1_ == '\n') {
            FUN_02002334(piVar5,&uStack00000054,1);
          }
          else {
            *(char *)piVar5 = uStack00000054;
          }
          piVar5 = (int *)((int)piVar5 + 1);
          uStack00000060 = uStack00000060 + 1;
        }
        uStack00000054 = (char)in_stack_0000002c;
        if ((uStack00000060 != 0) && ((in_stack_000000a0 == 0 || (in_stack_00000014 != 0)))) {
          in_stack_00000050 = in_stack_00000050 + 1;
          goto LAB_0200470c;
        }
        if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
        if (in_stack_0000003c != 0) {
          *(char *)piVar4 = '\0';
        }
      }
      else if (in_stack_0000003c != 0) {
        *(char *)piVar4 = '\0';
      }
    }
    break;
  case 100:
    uVar2 = 10;
    goto LAB_02004346;
  case 0x65:
  case 0x66:
  case 0x67:
    goto switchD_020042d2_caseD_41;
  case 0x68:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x74:
  case 0x76:
  case 0x77:
    goto switchD_020042d2_caseD_42;
  case 0x69:
    uVar2 = 0;
LAB_02004346:
    if (in_stack_00000038 == 0) {
      if ((uStack00000064._2_1_ == '\a') || (uStack00000064._2_1_ == '\x04')) {
        uVar7 = FUN_02005bac(uVar2,in_stack_00000068,unaff_r5,unaff_r6);
      }
      else {
        in_stack_00000048 = FUN_02005960(uVar2,in_stack_00000068,unaff_r5,unaff_r6);
      }
      in_stack_0000001c = (int)((ulonglong)uVar7 >> 0x20);
      in_stack_00000040 = (int)uVar7;
      if (uStack00000060 == 0) {
        if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
        in_stack_00000038 = 1;
        in_stack_00000020 = 0;
        uVar7 = 0;
      }
      else if ((uStack00000064._2_1_ == '\a') || (uStack00000064._2_1_ == '\x04')) {
        if (in_stack_0000005c != 0) {
          uVar7 = CONCAT44(-(uint)(in_stack_00000040 != 0) - in_stack_0000001c,-in_stack_00000040);
        }
      }
      else if (in_stack_0000005c == 0) {
        in_stack_00000020 = in_stack_00000048;
        uVar7 = CONCAT44(in_stack_00000028,in_stack_00000024);
      }
      else {
        in_stack_00000020 = -in_stack_00000048;
        uVar7 = CONCAT44(in_stack_00000028,in_stack_00000024);
      }
    }
    else {
      in_stack_00000020 = 0;
      uVar7 = 0;
    }
    if (piVar4 != (int *)0x0) {
      switch(uStack00000064._2_1_) {
      case '\0':
        *piVar4 = in_stack_00000020;
        break;
      case '\x01':
        *(char *)piVar4 = (char)in_stack_00000020;
        break;
      case '\x02':
        *(short *)piVar4 = (short)in_stack_00000020;
        break;
      case '\x03':
        *piVar4 = in_stack_00000020;
        break;
      case '\x04':
        *(undefined8 *)piVar4 = uVar7;
        break;
      case '\x05':
        *piVar4 = in_stack_00000020;
        break;
      case '\x06':
        *piVar4 = in_stack_00000020;
        break;
      case '\a':
        *(undefined8 *)piVar4 = uVar7;
      }
      if (in_stack_00000038 == 0) {
        in_stack_00000050 = in_stack_00000050 + 1;
      }
    }
    in_stack_0000004c = in_stack_0000004c + 1;
    break;
  case 0x6e:
    if (piVar4 != (int *)0x0) {
      switch(uStack00000064._2_1_) {
      case '\0':
        *piVar4 = unaff_r7;
        break;
      case '\x01':
        *(char *)piVar4 = (char)unaff_r7;
        break;
      case '\x02':
        *(short *)piVar4 = (short)unaff_r7;
        break;
      case '\x03':
        *piVar4 = unaff_r7;
        break;
      case '\a':
        *piVar4 = unaff_r7;
        piVar4[1] = unaff_r7 >> 0x1f;
      }
    }
    break;
  case 0x6f:
    uVar2 = 8;
    goto LAB_02004472;
  case 0x73:
    if (in_stack_00000038 == 0) {
      uStack00000054 = (*unaff_r5)(unaff_r6,0,0);
      while( true ) {
        iVar3 = (int)uStack00000054;
        if ((iVar3 < 0) || (0x7f < iVar3)) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(ushort *)(&DAT_0208d520 + iVar3 * 2) & 0x100;
        }
        if (uVar1 == 0) break;
        uStack00000054 = (*unaff_r5)(unaff_r6,0,0);
      }
      (*unaff_r5)(unaff_r6,iVar3,1);
    }
    goto LAB_020047b0;
  case 0x75:
    uVar2 = 10;
    goto LAB_02004472;
  case 0x78:
switchD_02004306_caseD_78:
    uVar2 = 0x10;
LAB_02004472:
    if (in_stack_00000038 == 0) {
      if ((uStack00000064._2_1_ == '\a') || (uStack00000064._2_1_ == '\x04')) {
        uVar7 = FUN_02005bac(uVar2,in_stack_00000068,unaff_r5,unaff_r6);
      }
      else {
        in_stack_00000048 = FUN_02005960(uVar2,in_stack_00000068,unaff_r5,unaff_r6);
      }
      in_stack_0000001c = (int)((ulonglong)uVar7 >> 0x20);
      in_stack_00000040 = (int)uVar7;
      if (uStack00000060 == 0) {
        if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
        in_stack_00000038 = 1;
        in_stack_00000048 = 0;
        uVar7 = 0;
      }
      else if (in_stack_0000005c != 0) {
        if (uStack00000064._2_1_ == '\a') {
          uVar7 = CONCAT44(-(uint)(in_stack_00000040 != 0) - in_stack_0000001c,-in_stack_00000040);
        }
        else {
          in_stack_00000048 = -in_stack_00000048;
        }
      }
    }
    else {
      in_stack_00000048 = 0;
      uVar7 = 0;
    }
    if (piVar4 != (int *)0x0) {
      switch(uStack00000064._2_1_) {
      case '\0':
        *piVar4 = in_stack_00000048;
        break;
      case '\x01':
        *(char *)piVar4 = (char)in_stack_00000048;
        break;
      case '\x02':
        *(short *)piVar4 = (short)in_stack_00000048;
        break;
      case '\x03':
        *piVar4 = in_stack_00000048;
        break;
      case '\x04':
        *(undefined8 *)piVar4 = uVar7;
        break;
      case '\x05':
        *piVar4 = in_stack_00000048;
        break;
      case '\x06':
        *piVar4 = in_stack_00000048;
        break;
      case '\a':
        *(undefined8 *)piVar4 = uVar7;
      }
      if (in_stack_00000038 == 0) {
        in_stack_00000050 = in_stack_00000050 + 1;
      }
    }
    in_stack_0000004c = in_stack_0000004c + 1;
    break;
  default:
    if (uStack00000064._3_1_ != 0x61) goto switchD_020042d2_caseD_42;
switchD_020042d2_caseD_41:
    if (in_stack_00000038 == 0) {
      uVar7 = FUN_02004d84(in_stack_00000068,unaff_r5,unaff_r6,&uStack00000060);
      if (uStack00000060 == 0) {
        if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
        in_stack_00000038 = 1;
        uVar7 = FUN_0200c85c(DAT_02093138);
      }
    }
    else {
      uVar7 = FUN_0200c85c(DAT_02093138);
    }
    if (piVar4 != (int *)0x0) {
      if (uStack00000064._2_1_ == '\0') {
        iVar3 = FUN_0200b6c4((int)uVar7);
        *piVar4 = iVar3;
      }
      else if (uStack00000064._2_1_ == '\b') {
        *(undefined8 *)piVar4 = uVar7;
      }
      else if (uStack00000064._2_1_ == '\t') {
        *(undefined8 *)piVar4 = uVar7;
      }
      if (in_stack_00000038 == 0) {
        in_stack_00000050 = in_stack_00000050 + 1;
      }
    }
    in_stack_0000004c = in_stack_0000004c + 1;
  }
switchD_02004960_caseD_4:
  if (*in_stack_0000000c != '\0') {
    FUN_02004192();
  }
switchD_020042d2_caseD_42:
  iVar3 = (*unaff_r5)(unaff_r6,0,2);
  if ((iVar3 == 0) || (in_stack_0000004c != 0)) {
    return in_stack_00000050;
  }
  return -1;
}

