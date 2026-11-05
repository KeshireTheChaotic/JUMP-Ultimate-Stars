
undefined4 FUN_0217abc4(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_250;
  uint local_244;
  undefined1 auStack_23c [2];
  undefined1 auStack_23a [6];
  undefined4 local_234;
  undefined1 auStack_230 [12];
  undefined1 auStack_224 [4];
  int local_220;
  undefined1 auStack_21c [520];
  
  if (param_2 == 0) {
    iVar2 = FUN_02178448();
    iVar3 = FUN_02178448();
    if ((int)(uint)*(byte *)(iVar2 + 0x19d) < *(int *)(iVar3 + 0x33c) + -1) {
      iVar2 = FUN_02178448();
      local_244 = *(byte *)(iVar2 + 0x19d) + 1;
    }
    else {
      local_244 = 0;
    }
  }
  else {
    iVar2 = FUN_02178448();
    local_244 = (uint)*(byte *)(iVar2 + 0x19d);
  }
  bVar1 = false;
  do {
    do {
      do {
        if ((param_2 == 0) || (bVar1)) {
          iVar2 = FUN_02178448();
          *(char *)(iVar2 + 0x19d) = *(char *)(iVar2 + 0x19d) + '\x01';
          iVar2 = FUN_02178448();
          iVar3 = FUN_02178448();
          if (*(int *)(iVar3 + 0x33c) <= (int)(uint)*(byte *)(iVar2 + 0x19d)) {
            iVar2 = FUN_02178448();
            *(undefined1 *)(iVar2 + 0x19d) = 0;
          }
        }
        if ((bVar1) && (iVar2 = FUN_02178448(), local_244 == *(byte *)(iVar2 + 0x19d))) {
          iVar2 = FUN_02178448();
          *(undefined4 *)(iVar2 + 0x1c0) = 3000;
          iVar2 = FUN_02178448();
          uVar9 = FUN_02054b44();
          *(undefined8 *)(iVar2 + 0x1c4) = uVar9;
          iVar2 = FUN_02178448();
          *(undefined4 *)(iVar2 + 0x1b4) = 0;
          return 0;
        }
        bVar1 = true;
        uVar4 = FUN_02177558();
        iVar2 = FUN_02178448();
        iVar3 = FUN_02178448();
        iVar5 = FUN_02178448();
        iVar2 = FUN_02069718(uVar4,*(int *)(iVar2 + 0x2f4) +
                                   (uint)*(byte *)(iVar3 + (uint)*(byte *)(iVar5 + 0x19d) + 0x2fc) *
                                   0xc);
      } while ((iVar2 == 0) || (iVar2 == -1));
      iVar3 = FUN_02178448();
      iVar5 = FUN_02178448();
      iVar6 = FUN_02178448();
      iVar3 = thunk_FUN_020698cc(*(int *)(iVar3 + 0x2f4) +
                                 (uint)*(byte *)(iVar5 + (uint)*(byte *)(iVar6 + 0x19d) + 0x2fc) *
                                 0xc);
    } while (iVar3 == 0);
    iVar5 = 1;
    iVar3 = FUN_02178448();
    if (*(char *)(iVar3 + 0xd) != '\0') {
      iVar3 = 4;
      do {
        iVar6 = FUN_02178448();
        if (iVar2 == *(int *)(iVar6 + iVar3 + 0xf4)) break;
        iVar3 = iVar3 + 4;
        iVar5 = iVar5 + 1;
        iVar6 = FUN_02178448();
      } while (iVar5 <= (int)(uint)*(byte *)(iVar6 + 0xd));
    }
    iVar3 = FUN_02178448();
    if ((int)(uint)*(byte *)(iVar3 + 0xd) < iVar5) {
      puVar7 = (undefined4 *)FUN_02178448();
      iVar3 = FUN_02181ddc(*puVar7,iVar2,&local_234);
      puVar7 = (undefined4 *)FUN_02178448();
      iVar5 = FUN_02181e2c(*puVar7,local_234,auStack_224);
      if ((iVar3 == 0 && iVar5 == 0) && (local_220 == 4)) {
        iVar3 = FUN_02175c68(&DAT_021a4b8c,auStack_230,auStack_21c,0x2f);
        iVar5 = FUN_02175c68(&DAT_021a4b90,auStack_23a,auStack_21c,0x2f);
        iVar6 = FUN_02175c68(&DAT_021a4b94,auStack_23c,auStack_21c,0x2f);
        if ((0 < iVar3) &&
           (((0 < iVar5 && (0 < iVar6)) && (iVar3 = FUN_02005e3c(auStack_230,0,10), iVar3 == 3)))) {
          uVar8 = FUN_02005e3c(auStack_23a,0,10);
          iVar3 = FUN_02178448();
          if (uVar8 == *(byte *)(iVar3 + 0x16)) {
            local_250 = param_1;
            if (iVar2 == param_3) {
              local_250 = 1;
            }
            uVar4 = FUN_0217ae0c(iVar2,local_250);
            return uVar4;
          }
        }
      }
    }
  } while( true );
}

