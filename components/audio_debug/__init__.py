import esphome.codegen as cg

CODEOWNERS = ["@KillBill2023"]

audio_debug_ns = cg.esphome_ns.namespace("audio_debug")

AudioDebug = audio_debug_ns.class_("AudioDebug", cg.Component)
