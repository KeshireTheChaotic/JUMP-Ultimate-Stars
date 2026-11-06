
void FUN_021784b8(int param_1,undefined4 param_2,int param_3,char *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_20 [12];
  
  iVar2 = FUN_02178448();
  if (((*(int *)(iVar2 + 0x198) == 6) || (iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x198) == 0xb))
     && (param_4 != (char *)0x0)) {
    if (param_1 == 0) {
      param_4[8] = '\0';
      param_4[9] = '\0';
      param_4[10] = '\0';
      param_4[0xb] = '\0';
      iVar2 = FUN_02178448();
      *(char *)(iVar2 + 0x14) = *(char *)(iVar2 + 0x14) + '\x01';
      iVar2 = FUN_02178448();
      uVar7 = (uint)*(byte *)(iVar2 + 0x14);
      if (*param_4 == '\0') {
        if (param_3 != 0) {
          iVar2 = FUN_02178448();
          *(undefined4 *)(iVar2 + (uVar7 - 1) * 4 + 0x208) = *(undefined4 *)(param_3 + 4);
          uVar1 = *(ushort *)(param_3 + 2);
          iVar2 = FUN_02178448();
          *(ushort *)(iVar2 + (uVar7 - 1) * 2 + 0x288) = uVar1 >> 8 | uVar1 << 8;
        }
        iVar2 = FUN_02178448();
        uVar8 = OS_GetTick();
        *(undefined8 *)(iVar2 + 0x184) = uVar8;
        FUN_02178434(7);
        return;
      }
      iVar6 = uVar7 * 4;
      iVar2 = FUN_02178448();
      *(undefined4 *)(iVar2 + iVar6 + 0x208) = *(undefined4 *)(param_3 + 4);
      uVar1 = *(ushort *)(param_3 + 2);
      iVar2 = FUN_02178448();
      *(ushort *)(iVar2 + uVar7 * 2 + 0x288) = uVar1 >> 8 | uVar1 << 8;
      iVar2 = FUN_02178448();
      *(undefined1 *)(iVar2 + 0x174) = 0;
      iVar2 = FUN_02178448();
      *(undefined4 *)(iVar2 + 0x178) = 0;
      iVar2 = FUN_02178448();
      *(undefined4 *)(iVar2 + 0x17c) = 0;
      *(undefined4 *)(iVar2 + 0x180) = 0;
      iVar2 = FUN_02178448();
      if (*(int *)(iVar2 + 0x198) == 0xb) {
        FUN_02178434(0xc);
      }
      else {
        FUN_02178434(7);
      }
      iVar2 = FUN_02178448();
      *(undefined1 *)(iVar2 + 0xc) = 0;
      iVar2 = FUN_02178448();
      FUN_02052c44(auStack_20,0xc,&DAT_021a4b2c,*(undefined4 *)(iVar2 + 0x1f8));
      iVar2 = FUN_02178448();
      iVar3 = FUN_02178448();
      iVar4 = FUN_02178448();
      uVar5 = FUN_0218c40c(*(undefined4 *)(iVar3 + iVar6 + 0x208),
                           *(undefined2 *)(iVar4 + uVar7 * 2 + 0x288),0);
      iVar3 = FUN_02178448();
      iVar2 = FUN_0218a910(**(undefined4 **)(iVar2 + 4),0,uVar5,auStack_20,0xffffffff,5000,
                           *(undefined4 *)(iVar3 + 8),0);
      if (iVar2 == 1) {
        FUN_02178f5c();
        return;
      }
      if (iVar2 != 0) {
        iVar2 = FUN_02178448();
        FUN_0217a93c(*(undefined4 *)(iVar2 + iVar6 + 0xf4));
        return;
      }
    }
    else if ((*(int *)(param_4 + 8) != 0) &&
            ((iVar2 = FUN_02178fcc(param_1), iVar2 == 2 || (iVar2 == 1)))) {
      if (*param_4 == '\0') {
        if ((iVar2 != 1) && ((iVar2 != 2 || (param_4[1] == '\0')))) {
          param_4[1] = param_4[1] + '\x01';
          FUN_0217c180(param_4);
          FUN_02179000();
          return;
        }
        param_4[8] = '\0';
        param_4[9] = '\0';
        param_4[10] = '\0';
        param_4[0xb] = '\0';
        iVar2 = FUN_02178460();
        if (iVar2 != 0) {
          iVar2 = FUN_02178448();
          iVar6 = FUN_02178448();
          FUN_0217a8a4(*(undefined4 *)(iVar2 + (uint)*(byte *)(iVar6 + 0xd) * 4 + 0xf4));
          return;
        }
      }
      else {
        iVar6 = FUN_02178448();
        uVar8 = OS_GetTick();
        *(undefined8 *)(iVar6 + 0x17c) = uVar8;
        if ((iVar2 == 1) ||
           ((iVar2 == 2 && (iVar2 = FUN_02178448(), *(char *)(iVar2 + 0x174) != '\0')))) {
          param_4[8] = '\0';
          param_4[9] = '\0';
          param_4[10] = '\0';
          param_4[0xb] = '\0';
          iVar2 = FUN_02178448();
          if ((*(char *)(iVar2 + 0x15) == '\x03') ||
             (iVar2 = FUN_02178448(), *(char *)(iVar2 + 0x15) == '\x02')) {
            iVar2 = FUN_02178460(1);
            if (iVar2 == 0) {
              return;
            }
          }
          else {
            iVar2 = FUN_02178460(0);
            if (iVar2 == 0) {
              return;
            }
          }
          iVar2 = FUN_02178448();
          *(undefined1 *)(iVar2 + 0x174) = 0;
          iVar2 = FUN_02178448();
          *(undefined4 *)(iVar2 + 0x178) = 0;
          iVar2 = FUN_02178448();
          *(undefined4 *)(iVar2 + 0x17c) = 0;
          *(undefined4 *)(iVar2 + 0x180) = 0;
          iVar2 = FUN_02178448();
          iVar6 = FUN_02178448();
          FUN_0217a93c(*(undefined4 *)(iVar2 + (*(byte *)(iVar6 + 0xd) + 1) * 4 + 0xf4));
        }
      }
    }
  }
  return;
}

