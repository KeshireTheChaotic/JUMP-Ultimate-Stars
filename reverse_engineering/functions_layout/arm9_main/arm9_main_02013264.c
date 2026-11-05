
/* JUS-CLASS jus_TagIPCT::jus_TagIPCT [class-type-tag] stores vtable 0209aea0 into *this
   (constructor) */

undefined4 *
jus_TagIPCT::jus_TagIPCT
          (undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  if (param_2 == 0) {
    param_2 = DAT_020a1078;
  }
  jus_Class_0209af58::jus_Class_0209af58(param_1,param_2,param_3,param_4);
  *param_1 = &vftable;
  param_1[0xe] = param_8;
  param_1[0xf] = 0;
  param_1[0x10] = param_9;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  uVar1 = (**(code **)(*param_3 + 0x90))(param_3,param_5);
  param_1[0x12] = uVar1;
  if ((param_1[0x10] & 2) == 0) {
    param_1[0xe] = param_1[0xe] + 1 >> 1;
  }
  iVar2 = (**(code **)(*param_3 + 0x68))(param_3,param_4);
  iVar4 = (iVar2 + 1U >> 1) + 1 + (uint)(*(ushort *)(param_1[0x12] + 4) >> 1);
  puVar3 = (undefined2 *)FUN_0201a228((iVar4 * 2 + 1) * 2);
  param_1[0xd] = puVar3;
  *puVar3 = 0;
  *(short *)(param_1[0xd] + iVar4 * 2) = (short)param_1[0xe];
  *(undefined2 *)(param_1[0xd] + iVar4 * 4) = 0x7fff;
  iVar2 = (**(code **)(*param_3 + 0x68))(param_3,param_4);
  FUN_02051890(param_6,param_1[0xd] + 2,(uint)*(ushort *)(param_1[0x12] + 4) + iVar2);
  iVar2 = (**(code **)(*param_3 + 0x68))(param_3,param_4);
  FUN_02051890(param_7,param_1[0xd] + (iVar4 + 1) * 2,(uint)*(ushort *)(param_1[0x12] + 4) + iVar2);
  FUN_02013aec(param_1);
  return param_1;
}

