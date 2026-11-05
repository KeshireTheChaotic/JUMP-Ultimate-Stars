
void FUN_0214efac(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,char param_5,
                 char param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 auStack_218 [256];
  undefined1 auStack_118 [256];
  
  FUN_0214f4c0();
  *(undefined2 *)((int)param_1 + 0x1e) = 0xffff;
  iVar3 = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    if (0x49 < iVar3) goto LAB_0214f03c;
    if (param_2 == ((uint)(&DAT_020924b4)[iVar3 * 2] >> 0xe & 0x3f)) break;
    iVar3 = iVar3 + 1;
  }
  *(short *)((int)param_1 + 0x1e) = (short)iVar3;
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    if (*(short *)((int)param_1 + 0x1e) == (&DAT_0215ff5c)[iVar3 * 2]) {
      *(undefined2 *)((int)param_1 + 0x1e) = (&DAT_0215ff5e)[iVar3 * 2];
    }
    iVar3 = iVar1;
  } while (iVar1 < 2);
LAB_0214f03c:
  if (*(short *)((int)param_1 + 0x1e) == -1) {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if ((char)param_1[7] == '\0') {
    iVar3 = CharaData::CharaData_Create(3,(int)*(short *)((int)param_1 + 0x1e),param_3,0,0);
    *param_1 = iVar3;
    FUN_0207506c(iVar3,param_5);
    FUN_0214f464(*param_1,0);
    local_254 = 0x83000;
    piVar2 = *(int **)(*(int *)(*(int *)(*param_1 + 8) + 4) + 100);
    (**(code **)(*piVar2 + 0x10))(piVar2,&local_254);
    FUN_0214f3e0(*(undefined4 *)(*param_1 + 8),param_4);
    local_250 = 0x70000;
    local_24c = 0x80000;
    FUN_0214f418(*(undefined4 *)(*param_1 + 8),&local_24c,&local_250);
  }
  else {
    thunk_FUN_0207400c(auStack_118,s_ending__02160cfc);
    thunk_FUN_020741c4(auStack_118,(&PTR_DAT_0209e840)[param_2]);
    thunk_FUN_0207400c(auStack_218,auStack_118);
    thunk_FUN_020741c4(auStack_218,&DAT_02160d04);
    thunk_FUN_020741c4(auStack_118,&DAT_02160d08);
    thunk_FUN_020741c4(auStack_218,&DAT_02160d08);
    iVar3 = FUN_020101f4(auStack_118,0);
    param_1[2] = iVar3;
    iVar3 = FUN_020101f4(auStack_218,0);
    param_1[1] = iVar3;
    iVar3 = param_2 * 0x10;
    if (param_5 == '\0') {
      local_220 = 0x83000;
      iVar1 = FUN_0214eddc(iVar3 + 0xa04000,iVar3 + 0xa04000,param_3,&local_220,0);
    }
    else {
      local_21c = 0x83000;
      iVar1 = FUN_0214eddc(param_2 * 0x10 + 0xa04001,iVar3 + 0xa04000,param_3,&local_21c,0);
    }
    param_1[3] = iVar1;
    (**(code **)(**(int **)(*(int *)(param_1[3] + 4) + 0x68) + 0x70))();
    (**(code **)(**(int **)(param_1[3] + 4) + 0xd8))(*(int **)(param_1[3] + 4),0);
    FUN_0214f3e0(param_1[3],param_4);
    local_228 = 0x70000;
    local_224 = 0x80000;
    FUN_0214f418(param_1[3],&local_224,&local_228);
    if (param_6 != '\0') {
      if (param_5 == '\0') {
        local_234 = 0x82000;
        iVar1 = FUN_0203b404();
        iVar1 = FUN_0214eddc(iVar3 + 0xa05000,iVar3 + 0xa05000,*(undefined4 *)(iVar1 + 0x88),
                             &local_234,0);
        param_1[4] = iVar1;
        local_238 = 0x81000;
        iVar1 = FUN_0203b404();
        iVar3 = FUN_0214eddc(iVar3 + 0xa05001,iVar3 + 0xa05000,*(undefined4 *)(iVar1 + 0x88),
                             &local_238,0);
      }
      else {
        local_22c = 0x82000;
        iVar1 = FUN_0203b404();
        iVar1 = FUN_0214eddc(iVar3 + 0xa05002,iVar3 + 0xa05000,*(undefined4 *)(iVar1 + 0x88),
                             &local_22c,0);
        param_1[4] = iVar1;
        local_230 = 0x81000;
        iVar1 = FUN_0203b404();
        iVar3 = FUN_0214eddc(iVar3 + 0xa05003,iVar3 + 0xa05000,*(undefined4 *)(iVar1 + 0x88),
                             &local_230,0);
      }
      param_1[5] = iVar3;
      (**(code **)(**(int **)(*(int *)(param_1[4] + 4) + 0x68) + 0x70))();
      (**(code **)(**(int **)(*(int *)(param_1[5] + 4) + 0x68) + 0x70))();
      (**(code **)(**(int **)(param_1[4] + 4) + 0xd8))(*(int **)(param_1[4] + 4),0);
      (**(code **)(**(int **)(param_1[5] + 4) + 0xd8))(*(int **)(param_1[5] + 4),0);
      FUN_0214f3e0(param_1[4],param_4);
      FUN_0214f3e0(param_1[5],param_4);
      local_240 = 0x70000;
      local_23c = 0x80000;
      FUN_0214f418(param_1[4],&local_23c,&local_240);
      local_248 = 0x70000;
      local_244 = 0x80000;
      FUN_0214f418(param_1[5],&local_244,&local_248);
    }
  }
  return;
}

