from drone_swarm_py import Event, EventType


def test_event_default_construction():
    ev = Event()
    assert ev.timestamp_ms == 0
    assert ev.target_id == 0
    assert ev.x == 0.0
    assert ev.y == 0.0


def test_event_set_type():
    ev = Event()
    ev.type = EventType.TICK
    assert ev.type == EventType.TICK


def test_event_set_fields():
    ev = Event()
    ev.type = EventType.TARGET_DETECTED
    ev.timestamp_ms = 1234
    ev.target_id = 42
    ev.x = 10.5
    ev.y = -20.5
    assert ev.type == EventType.TARGET_DETECTED
    assert ev.timestamp_ms == 1234
    assert ev.target_id == 42
    assert ev.x == 10.5
    assert ev.y == -20.5
