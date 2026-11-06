
int FUN_02004192(void)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint unaff_r4;
  int *piVar5;
  int *piVar6;
  code *unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  bool bVar7;
  undefined8 uVar8;
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
  
  uVar8 = CONCAT44(in_stack_0000001c,in_stack_00000040);
  bVar7 = true;
  if ((-1 < (int)unaff_r4) && ((int)unaff_r4 < 0x80)) {
    bVar7 = false;
  }
  if (bVar7) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ushort *)(&DAT_0208d520 + unaff_r4 * 2) & 0x100;
  }
  if (uVar1 != 0) {
    do {
      bVar7 = true;
      in_stack_0000000c = in_stack_0000000c + 1;
      iVar4 = (int)*in_stack_0000000c;
      if ((-1 < iVar4) && (iVar4 < 0x80)) {
        bVar7 = false;
      }
      if (bVar7) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(ushort *)(&DAT_0208d520 + iVar4 * 2) & 0x100;
      }
    } while (uVar1 != 0);
    if (in_stack_00000038 == 0) {
      do {
        uStack00000054 = (*unaff_r5)(unaff_r6,0,0);
        iVar4 = (int)uStack00000054;
        if ((iVar4 < 0) || (0x7f < iVar4)) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(ushort *)(&DAT_0208d520 + iVar4 * 2) & 0x100;
        }
      } while (uVar1 != 0);
      (*unaff_r5)(unaff_r6,iVar4,1);
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
    piVar5 = (int *)*in_stack_00000010;
    in_stack_00000010 = in_stack_00000010 + 1;
  }
  else {
    piVar5 = (int *)0x0;
  }
  if (((uStack00000064._3_1_ != 0x6e) && (in_stack_00000038 == 0)) &&
     (iVar4 = (*unaff_r5)(unaff_r6,0,2), iVar4 != 0)) {
    if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
    in_stack_00000038 = 1;
  }
  uVar2 = (uint)uStack00000064._3_1_;
  if (uVar2 < 0x5c) {
    if (uVar2 < 0x5b) {
      if (0x47 < uVar2) {
        if (uVar2 != 0x58) goto switchD_020042d2_caseD_42;
switchD_02004306_caseD_78:
        uVar3 = 0x10;
        goto LAB_02004472;
      }
      if (-1 < (int)(uVar2 - 0x41)) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar2 - 0x41) {
        case 1:
          goto switchD_020042d2_caseD_42;
        }
        goto switchD_020042d2_caseD_41;
      }
      if (uVar2 != 0x25) goto switchD_020042d2_caseD_42;
      if (in_stack_00000038 == 0) {
        do {
          uStack00000054 = (*unaff_r5)(unaff_r6,0,0);
          iVar4 = (int)uStack00000054;
          if ((iVar4 < 0) || (0x7f < iVar4)) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(ushort *)(&DAT_0208d520 + iVar4 * 2) & 0x100;
          }
        } while (uVar1 != 0);
        if ((iVar4 != 0x25) && ((*unaff_r5)(unaff_r6,iVar4,1), in_stack_000000a0 == 0))
        goto switchD_020042d2_caseD_42;
      }
    }
    else {
LAB_020047b0:
      if (piVar5 == (int *)0x0) {
        uStack00000060 = 0;
        while (((iVar4 = in_stack_00000068 + -1, bVar7 = in_stack_00000068 != 0,
                in_stack_00000068 = iVar4, bVar7 &&
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
          piVar6 = piVar5;
          while ((iVar4 = in_stack_00000068 + -1, bVar7 = in_stack_00000068 != 0,
                 in_stack_00000068 = iVar4, bVar7 &&
                 ((((in_stack_000000a0 == 0 ||
                    (in_stack_00000014 = (uint)(uStack00000060 <= in_stack_0000003c),
                    in_stack_00000014 != 0)) &&
                   (in_stack_0000002c = (*unaff_r5)(unaff_r6,0,0), in_stack_0000002c != 0xffffffff))
                  && (uStack00000054 = (char)in_stack_0000002c,
                     ((uint)(byte)(&uStack0000006c)[(int)(in_stack_0000002c & 0xff) >> 3] &
                     1 << ((int)uStack00000054 & 7U)) != 0))))) {
            if (uStack00000064._2_1_ == 10) {
              FUN_02002334(piVar6,&uStack00000054,1);
              piVar6 = (int *)((int)piVar6 + 2);
            }
            else {
              *(char *)piVar6 = uStack00000054;
              piVar6 = (int *)((int)piVar6 + 1);
            }
            uStack00000060 = uStack00000060 + 1;
          }
          uStack00000054 = (char)in_stack_0000002c;
          if ((uStack00000060 != 0) && ((in_stack_000000a0 == 0 || (in_stack_00000014 != 0)))) {
            if (uStack00000064._2_1_ == 10) {
              *(undefined2 *)piVar6 = 0;
            }
            else {
              *(char *)piVar6 = '\0';
            }
            in_stack_00000050 = in_stack_00000050 + 1;
            goto LAB_02004932;
          }
          (*unaff_r5)(unaff_r6,(int)uStack00000054,1);
          if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
          if (in_stack_0000003c != 0) {
            *(char *)piVar5 = '\0';
          }
        }
        else if (in_stack_0000003c != 0) {
          *(char *)piVar5 = '\0';
        }
      }
    }
    goto switchD_02004960_caseD_4;
  }
  if (0x78 < uVar2) goto switchD_020042d2_caseD_42;
  if ((int)(uVar2 - 99) < 0) {
    if (uVar2 != 0x61) goto switchD_020042d2_caseD_42;
switchD_020042d2_caseD_41:
    if (in_stack_00000038 == 0) {
      uVar8 = FUN_02004d84(in_stack_00000068,unaff_r5,unaff_r6,&uStack00000060);
      if (uStack00000060 == 0) {
        if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
        in_stack_00000038 = 1;
        uVar8 = FUN_0200c85c(DAT_02093138);
      }
    }
    else {
      uVar8 = FUN_0200c85c(DAT_02093138);
    }
    if (piVar5 != (int *)0x0) {
      if (uStack00000064._2_1_ == 0) {
        iVar4 = FUN_0200b6c4((int)uVar8);
        *piVar5 = iVar4;
      }
      else if (uStack00000064._2_1_ == 8) {
        *(undefined8 *)piVar5 = uVar8;
      }
      else if (uStack00000064._2_1_ == 9) {
        *(undefined8 *)piVar5 = uVar8;
      }
      if (in_stack_00000038 == 0) {
        in_stack_00000050 = in_stack_00000050 + 1;
      }
    }
    in_stack_0000004c = in_stack_0000004c + 1;
    goto switchD_02004960_caseD_4;
  }
                    /* WARNING: Switch is manually overridden */
  switch(uVar2 - 99) {
  case 0:
    if (uStack00000064._1_1_ == '\0') {
      in_stack_00000068 = 1;
    }
    if (piVar5 == (int *)0x0) {
      uStack00000060 = 0;
      while ((iVar4 = in_stack_00000068 + -1, bVar7 = in_stack_00000068 != 0,
             in_stack_00000068 = iVar4, bVar7 &&
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
        piVar6 = piVar5;
        while ((iVar4 = in_stack_00000068 + -1, bVar7 = in_stack_00000068 != 0,
               in_stack_00000068 = iVar4, bVar7 &&
               (((in_stack_000000a0 == 0 ||
                 (in_stack_00000014 = (uint)(uStack00000060 < in_stack_0000003c),
                 in_stack_00000014 != 0)) &&
                (in_stack_0000002c = (*unaff_r5)(unaff_r6,0,0), in_stack_0000002c != 0xffffffff)))))
        {
          uStack00000054 = (char)in_stack_0000002c;
          if (uStack00000064._2_1_ == 10) {
            FUN_02002334(piVar6,&uStack00000054,1);
          }
          else {
            *(char *)piVar6 = uStack00000054;
          }
          piVar6 = (int *)((int)piVar6 + 1);
          uStack00000060 = uStack00000060 + 1;
        }
        uStack00000054 = (char)in_stack_0000002c;
        if ((uStack00000060 != 0) && ((in_stack_000000a0 == 0 || (in_stack_00000014 != 0)))) {
          in_stack_00000050 = in_stack_00000050 + 1;
          goto LAB_0200470c;
        }
        if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
        if (in_stack_0000003c != 0) {
          *(char *)piVar5 = '\0';
        }
      }
      else if (in_stack_0000003c != 0) {
        *(char *)piVar5 = '\0';
      }
    }
    break;
  case 1:
    uVar3 = 10;
    goto LAB_02004346;
  case 2:
  case 3:
  case 4:
    goto switchD_020042d2_caseD_41;
  default:
    goto switchD_020042d2_caseD_42;
  case 6:
    uVar3 = 0;
LAB_02004346:
    if (in_stack_00000038 == 0) {
      if ((uStack00000064._2_1_ == 7) || (uStack00000064._2_1_ == 4)) {
        uVar8 = FUN_02005bac(uVar3,in_stack_00000068,unaff_r5,unaff_r6);
      }
      else {
        in_stack_00000048 = FUN_02005960(uVar3,in_stack_00000068,unaff_r5,unaff_r6);
      }
      in_stack_0000001c = (int)((ulonglong)uVar8 >> 0x20);
      in_stack_00000040 = (int)uVar8;
      if (uStack00000060 == 0) {
        if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
        in_stack_00000038 = 1;
        in_stack_00000020 = 0;
        uVar8 = 0;
      }
      else if ((uStack00000064._2_1_ == 7) || (uStack00000064._2_1_ == 4)) {
        if (in_stack_0000005c != 0) {
          uVar8 = CONCAT44(-(uint)(in_stack_00000040 != 0) - in_stack_0000001c,-in_stack_00000040);
        }
      }
      else if (in_stack_0000005c == 0) {
        in_stack_00000020 = in_stack_00000048;
        uVar8 = CONCAT44(in_stack_00000028,in_stack_00000024);
      }
      else {
        in_stack_00000020 = -in_stack_00000048;
        uVar8 = CONCAT44(in_stack_00000028,in_stack_00000024);
      }
    }
    else {
      in_stack_00000020 = 0;
      uVar8 = 0;
    }
    if (piVar5 != (int *)0x0) {
      if (uStack00000064._2_1_ < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(uStack00000064._2_1_) {
        case 0:
          *piVar5 = in_stack_00000020;
          break;
        case 1:
          *(char *)piVar5 = (char)in_stack_00000020;
          break;
        case 2:
          *(short *)piVar5 = (short)in_stack_00000020;
          break;
        case 3:
          *piVar5 = in_stack_00000020;
          break;
        case 4:
          *(undefined8 *)piVar5 = uVar8;
          break;
        case 5:
          *piVar5 = in_stack_00000020;
          break;
        case 6:
          *piVar5 = in_stack_00000020;
          break;
        case 7:
          *(undefined8 *)piVar5 = uVar8;
        }
      }
      if (in_stack_00000038 == 0) {
        in_stack_00000050 = in_stack_00000050 + 1;
      }
    }
    in_stack_0000004c = in_stack_0000004c + 1;
    break;
  case 0xb:
    if ((piVar5 != (int *)0x0) && (uStack00000064._2_1_ < 8)) {
                    /* WARNING: Switch is manually overridden */
      switch(uStack00000064._2_1_) {
      case 0:
        *piVar5 = unaff_r7;
        break;
      case 1:
        *(char *)piVar5 = (char)unaff_r7;
        break;
      case 2:
        *(short *)piVar5 = (short)unaff_r7;
        break;
      case 3:
        *piVar5 = unaff_r7;
        break;
      case 7:
        *piVar5 = unaff_r7;
        piVar5[1] = unaff_r7 >> 0x1f;
      }
    }
    break;
  case 0xc:
    uVar3 = 8;
    goto LAB_02004472;
  case 0x10:
    if (in_stack_00000038 == 0) {
      uStack00000054 = (*unaff_r5)(unaff_r6,0,0);
      while( true ) {
        iVar4 = (int)uStack00000054;
        if ((iVar4 < 0) || (0x7f < iVar4)) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(ushort *)(&DAT_0208d520 + iVar4 * 2) & 0x100;
        }
        if (uVar1 == 0) break;
        uStack00000054 = (*unaff_r5)(unaff_r6,0,0);
      }
      (*unaff_r5)(unaff_r6,iVar4,1);
    }
    goto LAB_020047b0;
  case 0x12:
    uVar3 = 10;
LAB_02004472:
    if (in_stack_00000038 == 0) {
      if ((uStack00000064._2_1_ == 7) || (uStack00000064._2_1_ == 4)) {
        uVar8 = FUN_02005bac(uVar3,in_stack_00000068,unaff_r5,unaff_r6);
      }
      else {
        in_stack_00000048 = FUN_02005960(uVar3,in_stack_00000068,unaff_r5,unaff_r6);
      }
      in_stack_0000001c = (int)((ulonglong)uVar8 >> 0x20);
      in_stack_00000040 = (int)uVar8;
      if (uStack00000060 == 0) {
        if (in_stack_000000a0 == 0) goto switchD_020042d2_caseD_42;
        in_stack_00000038 = 1;
        in_stack_00000048 = 0;
        uVar8 = 0;
      }
      else if (in_stack_0000005c != 0) {
        if (uStack00000064._2_1_ == 7) {
          uVar8 = CONCAT44(-(uint)(in_stack_00000040 != 0) - in_stack_0000001c,-in_stack_00000040);
        }
        else {
          in_stack_00000048 = -in_stack_00000048;
        }
      }
    }
    else {
      in_stack_00000048 = 0;
      uVar8 = 0;
    }
    if (piVar5 != (int *)0x0) {
      if (uStack00000064._2_1_ < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(uStack00000064._2_1_) {
        case 0:
          *piVar5 = in_stack_00000048;
          break;
        case 1:
          *(char *)piVar5 = (char)in_stack_00000048;
          break;
        case 2:
          *(short *)piVar5 = (short)in_stack_00000048;
          break;
        case 3:
          *piVar5 = in_stack_00000048;
          break;
        case 4:
          *(undefined8 *)piVar5 = uVar8;
          break;
        case 5:
          *piVar5 = in_stack_00000048;
          break;
        case 6:
          *piVar5 = in_stack_00000048;
          break;
        case 7:
          *(undefined8 *)piVar5 = uVar8;
        }
      }
      if (in_stack_00000038 == 0) {
        in_stack_00000050 = in_stack_00000050 + 1;
      }
    }
    in_stack_0000004c = in_stack_0000004c + 1;
    break;
  case 0x15:
    goto switchD_02004306_caseD_78;
  }
switchD_02004960_caseD_4:
  if (*in_stack_0000000c != '\0') {
    FUN_02004192();
  }
switchD_020042d2_caseD_42:
  iVar4 = (*unaff_r5)(unaff_r6,0,2);
  if ((iVar4 == 0) || (in_stack_0000004c != 0)) {
    return in_stack_00000050;
  }
  return -1;
}

