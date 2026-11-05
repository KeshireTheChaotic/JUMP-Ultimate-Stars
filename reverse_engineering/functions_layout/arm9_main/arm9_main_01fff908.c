
void FUN_01fff908(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  int iVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined8 uVar3;
  
  *(undefined4 *)(param_2 + 0x74) = unaff_r4;
  if (*(int *)(param_2 + 0x6c) == 1) {
    iVar2 = param_2 + 0x28;
    puVar1 = (undefined4 *)(param_2 + 0x48);
  }
  else {
    puVar1 = (undefined4 *)(param_2 + 0x28);
    iVar2 = param_2 + 0x48;
  }
  *puVar1 = unaff_r5;
  puVar1[1] = unaff_r6;
  puVar1[2] = unaff_r7;
  puVar1[3] = unaff_r8;
  puVar1[4] = unaff_r9;
  puVar1[5] = unaff_r10;
  puVar1[6] = unaff_r11;
  puVar1[7] = in_r12;
  uVar3 = FUN_01fff8a0(param_4 + 0x200,param_2,iVar2,puVar1,param_2);
  uVar3 = FUN_01fff8a0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),iVar2);
  uVar3 = FUN_01fff5d8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x20);
  uVar3 = FUN_01fff5d8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x20);
  uVar3 = FUN_01fff8a0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),puVar1);
  uVar3 = FUN_01fff5d8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x20);
  FUN_01fff5d8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x20);
  return;
}

