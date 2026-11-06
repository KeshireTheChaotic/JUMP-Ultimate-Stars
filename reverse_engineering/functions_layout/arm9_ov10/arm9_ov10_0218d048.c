
void FUN_0218d048(undefined4 *param_1,char *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int local_820;
  char local_81c [2048];
  int local_1c;
  
  local_1c = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = DAT_021a6758;
  }
  cVar1 = *param_2;
  if (cVar1 == ';') {
    if ((code *)param_1[0x35] != (code *)0x0) {
      (*(code *)param_1[0x35])(param_2,param_3,param_4);
      return;
    }
  }
  else {
    if (cVar1 == '\\') {
      FUN_0218d384(param_1,local_81c);
      FUN_02001a50(*param_1,local_81c,local_1c,0,param_4,8);
      return;
    }
    if (((6 < param_3) && (cVar1 == -2)) && (param_2[1] == -3)) {
      if (0 < (int)param_1[0x2e]) {
        param_1[0x2e] = 0;
      }
      uVar3 = (uint)param_2[2];
      pcVar4 = param_2 + 3;
      pcVar5 = param_2 + 7;
      iVar6 = param_3 + -7;
      FUN_0218d870(local_81c,uVar3,pcVar4);
      iVar2 = local_1c;
      if (uVar3 < 9) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar3) {
        case 0:
          FUN_0218d530(param_1,local_81c,pcVar5,iVar6);
          break;
        case 1:
          if ((0xc < iVar6) && (param_1[0x2a] != 0)) {
            FUN_0218d784(param_1,pcVar5 + param_3 + -0x14);
          }
          FUN_0218d80c(param_1,local_81c,pcVar5,iVar6);
          break;
        case 2:
          if (0x20 < iVar6) {
            iVar6 = 0x20;
          }
          local_81c[0] = '\x05';
          FUN_02002434(local_81c + local_1c,pcVar5,iVar6);
          local_1c = local_1c + iVar6;
          break;
        default:
          return;
        case 4:
          if (param_1[0x2e] == -1) {
            return;
          }
          local_820 = 0;
          do {
            if (pcVar4[local_820] != *(char *)((int)param_1 + local_820 + 0x84)) {
              return;
            }
            local_820 = local_820 + 1;
          } while (local_820 < 4);
          if (iVar6 < 2) {
            return;
          }
          param_1[0x2e] = 0xffffffff;
          (*(code *)param_1[0x27])((int)*pcVar5,param_2 + 8,param_1[0x43]);
          return;
        case 6:
          local_820 = 0;
          do {
            if (pcVar4[local_820] != *(char *)((int)param_1 + local_820 + 0x84)) {
              return;
            }
            local_820 = local_820 + 1;
          } while (local_820 < 4);
          if (iVar6 < 4) {
            return;
          }
          local_81c[0] = '\a';
          local_81c[local_1c] = *pcVar5;
          local_81c[iVar2 + 1] = param_2[8];
          local_81c[iVar2 + 2] = param_2[9];
          local_81c[iVar2 + 3] = param_2[10];
          local_1c = local_1c + 4;
          iVar2 = FUN_0218d278(param_1,*(undefined4 *)pcVar5);
          if (iVar2 == 0) {
            FUN_0218d2c4(param_1,param_2 + 0xb,param_3 + -0xb);
          }
        }
        FUN_02001a50(*param_1,local_81c,local_1c,0,param_4,8);
      }
    }
  }
  return;
}

