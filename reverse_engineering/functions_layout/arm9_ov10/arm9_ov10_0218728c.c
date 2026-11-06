
int FUN_0218728c(int *param_1,int *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_28;
  undefined1 auStack_24 [4];
  int local_20;
  int local_1c [2];
  
  iVar5 = *param_1;
  if (*param_2 - 0x65U < 4) {
                    /* WARNING: Switch is manually overridden */
    switch(*param_2 - 0x65U) {
    case 1:
      iVar5 = FUN_02186ae4();
      if (iVar5 != 0) {
        return iVar5;
      }
      break;
    case 2:
      iVar4 = FUN_02189298(param_1,param_2[2],&local_28);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (local_28 == 4) {
        FUN_0218912c(param_1,s_Error_connecting_to_a_peer__021a5d40);
        return 3;
      }
      if (local_28 == 3) {
        bVar1 = true;
        iVar4 = FUN_021875f8(param_1,param_2[3],local_1c);
        if (iVar4 == 0) {
          FUN_0218912c(param_1,s_Error_connecting_to_a_peer__021a5d40);
          return 3;
        }
        FUN_02183b94(param_1,param_2 + 10,s__auth__021a5e70);
        FUN_02183b94(param_1,param_2 + 10,s__pid__021a5e78);
        FUN_02183b70(param_1,param_2 + 10,*(undefined4 *)(iVar5 + 0x1a0));
        FUN_02183b94(param_1,param_2 + 10,s__nick__021a5e80);
        FUN_02183b94(param_1,param_2 + 10,iVar5 + 0x110);
        FUN_02183b94(param_1,param_2 + 10,s__sig__021a5e88);
        FUN_02183b94(param_1,param_2 + 10,*(undefined4 *)(local_1c[0] + 0x18));
        FUN_02183b94(param_1,param_2 + 10,s__final__021a5e68);
        piVar3 = *(int **)(iVar5 + 0x434);
        if (piVar3 != (int *)0x0) {
          do {
            if (((piVar3[3] == param_2[3]) && (piVar3 != param_2)) && (*piVar3 < 0x68)) {
              bVar1 = false;
            }
            piVar3 = (int *)piVar3[0xf];
          } while (piVar3 != (int *)0x0);
        }
        if (bVar1) {
          FUN_02175814(*(undefined4 *)(local_1c[0] + 0x18));
          *(undefined4 *)(local_1c[0] + 0x18) = 0;
          iVar5 = FUN_021874c0(local_1c[0]);
          if (iVar5 != 0) {
            FUN_021875c0(param_1,local_1c[0]);
          }
        }
        *param_2 = 0x68;
      }
      break;
    case 3:
      iVar5 = FUN_02183824(param_1,param_2[2],param_2 + 6,auStack_24,&local_20,&DAT_021a5e30);
      if (iVar5 != 0) {
        return iVar5;
      }
      puVar2 = (undefined1 *)FUN_02004d40(param_2[6],s__final__021a5e68);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
        iVar4 = param_2[6];
        iVar5 = FUN_02004cec(iVar4,s__anack__021a5e98,7);
        if (iVar5 == 0) {
          param_2[5] = param_2[5] + 1;
          if (1 < param_2[5]) {
            FUN_0218912c(param_1,s_Error_getting_buddy_authorizatio_021a5ea8);
            return 3;
          }
          iVar5 = FUN_02186bdc(param_1,param_2);
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        else {
          iVar5 = FUN_02004cec(iVar4,s__aack__021a5ea0,6);
          if (iVar5 != 0) {
            FUN_0218912c(param_1,s_Error_parsing_buddy_message__021a5ecc);
            return 3;
          }
        }
        *param_2 = 0x69;
        param_2[8] = 0;
      }
    }
  }
  else {
    FUN_02002068(&DAT_021a5de0,s_gpiPeer_c_021a5cdc,0,0x9f);
  }
  if ((0 < param_2[0xc]) &&
     ((iVar5 = FUN_02183728(param_1,param_2[2],param_2 + 10,&local_20,1,&DAT_021a5e30),
      local_20 != 0 || (iVar5 != 0)))) {
    *param_2 = 0x6a;
  }
  return 0;
}

