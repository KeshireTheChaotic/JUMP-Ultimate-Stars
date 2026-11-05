
int FUN_0218710c(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_190 [4];
  int local_18c;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [31];
  undefined1 auStack_159 [33];
  undefined1 auStack_138 [33];
  undefined1 auStack_117 [259];
  
  iVar4 = *param_1;
  if (*param_2 != 0x68) {
    FUN_02002068(s_peer_>state____GPI_PEER_WAITING_021a5e48,s_gpiPeer_c_021a5cdc,0,0xc1);
  }
  iVar1 = FUN_02183824(param_1,param_2[2],param_2 + 6,auStack_190,&local_18c,&DAT_021a5e30);
  if (iVar1 == 0) {
    if (local_18c != 0) {
      *param_2 = 0x6a;
      return 0;
    }
    puVar2 = (undefined1 *)FUN_02004d40(param_2[6],s__final__021a5e68);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      iVar5 = param_2[6];
      iVar1 = FUN_02004cec(iVar5,s__auth__021a5e70,6);
      if (iVar1 != 0) {
        *param_2 = 0x6a;
        return 0;
      }
      iVar1 = FUN_02189328(iVar5,s__pid__021a5e78,auStack_188,0x10);
      if (iVar1 == 0) {
        *param_2 = 0x6a;
        return 0;
      }
      iVar1 = FUN_02005f14(auStack_188);
      iVar5 = FUN_02189328(param_2[6],s__nick__021a5e80,auStack_178,0x1f);
      if (iVar5 == 0) {
        *param_2 = 0x6a;
        return 0;
      }
      iVar5 = FUN_02189328(param_2[6],s__sig__021a5e88,auStack_159,0x21);
      if (iVar5 == 0) {
        *param_2 = 0x6a;
        return 0;
      }
      FUN_02003ce0(auStack_117,s__s_d_d_021a5e90,iVar4 + 0x177,*(undefined4 *)(iVar4 + 0x1a0),iVar1)
      ;
      uVar3 = FUN_02004b04(auStack_117);
      FUN_0200178c(auStack_117,uVar3,auStack_138);
      iVar4 = FUN_02004c2c(auStack_159,auStack_138);
      if (iVar4 != 0) {
        FUN_02183b94(param_1,param_2 + 10,s__anack__021a5e98);
        FUN_02183b94(param_1,param_2 + 10,s__final__021a5e68);
        *param_2 = 0x6a;
        return 0;
      }
      FUN_02183b94(param_1,param_2 + 10,s__aack__021a5ea0);
      FUN_02183b94(param_1,param_2 + 10,s__final__021a5e68);
      *param_2 = 0x69;
      param_2[3] = iVar1;
      param_2[8] = 0;
    }
    iVar1 = 0;
  }
  return iVar1;
}

