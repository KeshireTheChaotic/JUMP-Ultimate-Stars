
void FUN_02175db8(undefined4 param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint unaff_r6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  local_28 = 0;
  local_20 = 0;
  iVar1 = FUN_0217ca60();
  if (iVar1 == 0) {
    switch(param_2) {
    case 0:
    case 1:
      unaff_r4 = 0;
      break;
    case 2:
    case 3:
      unaff_r4 = 6;
      local_24 = 0xffffe250;
      break;
    case 4:
      unaff_r4 = 9;
      local_24 = 0xffffe24f;
    }
    if (unaff_r4 == 0) {
      pbVar2 = (byte *)FUN_0218a804(param_1);
      if (pbVar2 == (byte *)0x0) {
        return;
      }
      unaff_r6 = (uint)pbVar2[1];
      local_1c = (uint)((*(uint *)(DAT_021a7410 + 0x63c) & 1 << unaff_r6) != 0);
      FUN_0217e98c(unaff_r6);
      if (((*(char *)(DAT_021a7410 + 0x369) == '\x02') && (param_2 == 0)) ||
         ((*(char *)(DAT_021a7410 + 0x369) == '\x03' && (unaff_r6 == 0)))) {
        local_20 = 1;
      }
      local_28 = FUN_02176404(unaff_r6);
      (&DAT_021a7418)[*pbVar2] = 0;
      *(char *)(DAT_021a7410 + 0x361) = *(char *)(DAT_021a7410 + 0x361) + -1;
      *(char *)(DAT_021a7410 + 0x368) = *(char *)(DAT_021a7410 + 0x368) + -1;
    }
    if (((*(char *)(DAT_021a7410 + 0x2d) == '\0') && (*(int *)(DAT_021a7410 + 0x24) == 6)) &&
       (local_1c == 0)) {
      if ((*(char *)(DAT_021a7410 + 0x369) == '\x02') && (unaff_r4 == 0)) {
        FUN_0217cacc();
        FUN_0217ce44(local_28);
        return;
      }
    }
    else {
      iVar1 = FUN_0217ce60(unaff_r4,local_24,local_28);
      if (iVar1 == 0) {
        if (unaff_r4 != 0) {
          FUN_02175744(unaff_r4,local_24);
          return;
        }
        if ((*(char *)(DAT_021a7410 + 0x2d) == '\0') &&
           ((*(char *)(DAT_021a7410 + 0x369) == '\x02' ||
            (*(char *)(DAT_021a7410 + 0x369) == '\x03')))) {
          iVar1 = *(byte *)(DAT_021a7410 + 0x361) + 2;
          if (*(int *)(DAT_021a7410 + iVar1 * 4 + 0x448) != 0) {
            *(undefined1 *)(DAT_021a7410 + (uint)*(byte *)(DAT_021a7410 + 0x361) + 0x61d) =
                 *(undefined1 *)(DAT_021a7410 + iVar1 + 0x61c);
            FUN_0217cc80(*(byte *)(DAT_021a7410 + 0x361) + 1,*(byte *)(DAT_021a7410 + 0x361) + 3);
          }
        }
        if (*(char *)(DAT_021a7410 + 0x369) == '\x02') {
          if (*(char *)(DAT_021a7410 + 0x2d) == '\0') {
            FUN_0217cacc();
          }
          else if (*(char *)(DAT_021a7410 + 0x361) == '\0') {
            FUN_02177ea4(1,&DAT_021a4acc,0);
          }
        }
        else if (*(char *)(DAT_021a7410 + 0x361) == '\0') {
          FUN_02177ea4(1,&DAT_021a4acc,0);
        }
        if ((*(char *)(DAT_021a7410 + 0x369) == '\0') || (*(char *)(DAT_021a7410 + 0x369) == '\x01')
           ) {
          *(undefined1 *)(DAT_021a7410 + 0x36a) = *(undefined1 *)(DAT_021a7410 + 0x368);
          FUN_0218dbe8(*(undefined4 *)(DAT_021a7410 + 0x364));
        }
        iVar1 = DAT_021a7410;
        if ((*(int *)(DAT_021a7410 + 0x90) != 0) && (local_1c != 0)) {
          uVar3 = FUN_02177f3c(local_28);
          (**(code **)(DAT_021a7410 + 0x90))
                    (0,param_2 == 0,local_20,unaff_r6,uVar3,*(undefined4 *)(iVar1 + 0x94));
        }
        if (((*(char *)(DAT_021a7410 + 0x2d) != '\0') || (*(char *)(DAT_021a7410 + 0x369) != '\x02')
            ) && (*(char *)(DAT_021a7410 + 0x361) == '\0')) {
          FUN_0218cd38();
          FUN_0217d0ec();
          FUN_0217643c(3);
        }
      }
    }
  }
  return;
}

