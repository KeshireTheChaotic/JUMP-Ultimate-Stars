
void FUN_0217d3e4(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,int param_5,
                 char *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  iVar1 = FUN_02178448();
  if (iVar1 == 0) {
LAB_0217d40e:
    thunk_FUN_0218a6e4(param_2,s_Init_state_021a4c24,0xffffffff);
    return;
  }
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0x198) != 7) goto LAB_0217d40e;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x1a1) != '\0') goto LAB_0217d40e;
  iVar1 = FUN_0217653c();
  if (iVar1 == -1) {
    thunk_FUN_0218a6e4(param_2,s_Server_full_021a4c30);
    FUN_0217d118(6,0xfffeabc4);
    return;
  }
  iVar2 = FUN_02178448();
  iVar3 = FUN_02178448();
  if (param_3 == *(int *)(iVar2 + (uint)*(byte *)(iVar3 + 0xd) * 4 + 0x208)) {
    iVar2 = FUN_02178448();
    iVar3 = FUN_02178448();
    if (param_4 == *(ushort *)(iVar2 + (uint)*(byte *)(iVar3 + 0xd) * 2 + 0x288)) goto LAB_0217d4de;
  }
  if (*param_6 != '\0') {
    iVar2 = FUN_02005e3c(param_6,0,10);
    iVar3 = FUN_02178448();
    iVar4 = FUN_02178448();
    if (iVar2 == *(int *)(iVar3 + (uint)*(byte *)(iVar4 + 0xd) * 4 + 0xf4)) {
      iVar2 = FUN_02178448();
      iVar3 = FUN_02178448();
      *(int *)(iVar2 + (uint)*(byte *)(iVar3 + 0xd) * 4 + 0x208) = param_3;
      iVar2 = FUN_02178448();
      iVar3 = FUN_02178448();
      *(short *)(iVar2 + (uint)*(byte *)(iVar3 + 0xd) * 2 + 0x288) = (short)param_4;
LAB_0217d4de:
      iVar2 = FUN_02178448();
      *(undefined4 *)(iVar2 + 0x184) = 0;
      *(undefined4 *)(iVar2 + 0x188) = 0;
      iVar2 = FUN_02178448();
      iVar2 = thunk_FUN_0218a714(param_2,*(undefined4 *)(iVar2 + 8));
      if (iVar2 == 0) {
        FUN_0217d118(6,0xfffec5e6);
        return;
      }
      FUN_0217d1ac();
      iVar2 = FUN_02178448();
      if (*(char *)(iVar2 + 0xd) == '\0') {
        param_5 = param_5 >> 1;
        if (0xfffe < param_5) {
          param_5 = 0xffff;
        }
        iVar2 = FUN_02178448();
        *(short *)(iVar2 + 0x1a8) = (short)param_5;
      }
      puVar5 = (undefined4 *)FUN_02176508(iVar1);
      puVar6 = (undefined1 *)FUN_021764a8(iVar1);
      *puVar5 = param_2;
      iVar2 = FUN_02178448();
      *(char *)(iVar2 + 0xd) = *(char *)(iVar2 + 0xd) + '\x01';
      *puVar6 = (char)iVar1;
      iVar1 = FUN_02178448();
      iVar2 = FUN_02178448();
      puVar6[1] = *(undefined1 *)(iVar1 + (uint)*(byte *)(iVar2 + 0xd) + 0x2c7);
      *(undefined2 *)(puVar6 + 2) = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      FUN_0218a828(param_2,puVar6);
      FUN_0217a320(2);
      return;
    }
  }
  thunk_FUN_0218a6e4(param_2,s_Unknown_connect_attempt_021a4c3c,0xffffffff);
  return;
}

