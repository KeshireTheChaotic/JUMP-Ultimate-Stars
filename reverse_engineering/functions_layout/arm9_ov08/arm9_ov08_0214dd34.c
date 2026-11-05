
undefined4 FUN_0214dd34(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
code_r0x0214dd34:
  FUN_0214dc74(param_1,param_2);
  uVar1 = FUN_0214cddc();
  *(undefined4 *)(unaff_r7 + 0x14) = uVar1;
  do {
    if (*(short *)(unaff_r4 + 4) == 0) {
      return 0;
    }
    iVar2 = FUN_0214cdc4();
    unaff_r4 = (undefined1 *)(unaff_r6 + iVar2);
    param_2 = FUN_0214cdc4(*(undefined2 *)(unaff_r4 + 2));
    if (param_2 < 1) {
      return 0xffffffff;
    }
    switch(*unaff_r4) {
    case 0:
      FUN_0214cf10(unaff_r5,unaff_r4 + 6);
      break;
    case 1:
      FUN_0214cf10(unaff_r5 + 0x80,unaff_r4 + 6);
      break;
    case 2:
      FUN_0214cf10(unaff_r5 + 0x100,unaff_r4 + 6);
      break;
    case 3:
    case 4:
      iVar2 = FUN_0214cdc4(unaff_r4[6]);
      if (iVar2 < 1) {
        return 0xfffffffe;
      }
      break;
    case 5:
      FUN_0214dc74(unaff_r4 + 6,param_2);
      uVar1 = FUN_0214cddc();
      *(undefined4 *)(unaff_r7 + 0x10) = uVar1;
      break;
    case 6:
      goto switchD_0214dcd8_caseD_6;
    default:
      return 0xffffffff;
    }
  } while( true );
switchD_0214dcd8_caseD_6:
  param_1 = unaff_r4 + 6;
  goto code_r0x0214dd34;
}

