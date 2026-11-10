
/* JUS-GAME CommonEffect::CommonEffect_Init [source-string] __FILE__="CommonEffect.cpp"
   __FUNCTION__="CommonEffect_Init" lines=[103, 273] passed to 2 source-location call(s); header
   inlines: ALPropSetImp.h:Create */

void CommonEffect::CommonEffect_Init
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_28;
  
                    /* JUS-TAG
                       strings=["ALPropSetImp.h","CommonEffect.cpp","CommonEffect_Init","Create","EffectFlags"]
                        */
  iVar6 = 0;
  DAT_020afc40 = 0;
  piVar5 = &DAT_020afc4c;
  local_28 = param_4;
  DAT_020afc44 = param_1;
  do {
    iVar1 = FUN_02010238();
    uVar4 = (&DAT_0209e050)[iVar6];
    piVar5[1] = iVar1;
    thunk_FUN_02010254(iVar1,uVar4,0);
    iVar1 = FUN_0203b404();
    FUN_0206c498(*(undefined4 *)(iVar1 + 0x88));
    uVar4 = (&DAT_020923b4)[iVar6];
    piVar2 = (int *)FUN_02035e88(uVar4);
    if (piVar2[0xe] == 0) {
      (**(code **)(*piVar2 + 0x14))();
    }
    iVar1 = piVar2[0xe];
    *piVar5 = iVar1;
    piVar2 = *(int **)(iVar1 + 4);
    (**(code **)(*piVar2 + 0x50))(piVar2,1);
    FUN_02032a4c(*(undefined4 *)(*piVar5 + 4));
    iVar1 = FUN_02011b38();
    piVar5[2] = iVar1;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
    FUN_02023894(*(undefined4 *)(piVar5[2] + 4),uVar4,0);
    (**(code **)(**(int **)(*(int *)(piVar5[2] + 4) + 0x68) + 0xdc))();
    local_28 = 0x80000;
    FUN_0206c4d4(piVar5[2],&local_28);
    (**(code **)(**(int **)(piVar5[2] + 4) + 0xdc))(*(int **)(piVar5[2] + 4),0xffffffff);
    (**(code **)(**(int **)(piVar5[2] + 4) + 0x94))(*(int **)(piVar5[2] + 4),0x100);
    if (DAT_020afc44 != 0) {
      FUN_0206c514(piVar5[2]);
    }
    FUN_020107f4(FUN_02074540,uVar4,0x400,piVar5[2]);
    FUN_0206c54c();
    (**(code **)(**(int **)(piVar5[1] + 8) + 0x50))();
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 3;
  } while (iVar6 < 4);
  FUN_02023cd0(0x20204e47,CreateImpFunc);
  iVar6 = thunk_FUN_0201a228(0x20,s_ALPropSetImp_h_0209dff0,s_Create_0209dfbc,0x111);
  piVar5 = (int *)0x0;
  if (iVar6 != 0) {
    piVar5 = (int *)PropBindInstance_02095200::PropBindInstance_02095200(iVar6,0);
  }
  DAT_020afc48 = piVar5;
  puVar3 = (undefined4 *)
           thunk_FUN_0201a228(0x28,s_CommonEffect_cpp_0209e258,s_CommonEffect_Init_0209e244,0x67);
  if (puVar3 != (undefined4 *)0x0) {
    jus_Class_02098708::jus_Class_02098708(puVar3,s_EffectFlags_0209e280,&DAT_0209e26c);
    *puVar3 = &jus_Prop_EffectFlags::vftable;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0x80;
    *puVar3 = &jus_Prop_EffectFlags_Derived_02099640::vftable;
  }
  (**(code **)(*DAT_020afc48 + 0x3c))(DAT_020afc48,puVar3);
  return;
}

